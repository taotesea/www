/*
 *	PROGRAM:	SQL Trace plugin
 *	MODULE:		traceplugin.cpp
 *	DESCRIPTION:	Exported entrypoints for the plugin
 *
 *  The contents of this file are subject to the Initial
 *  Developer's Public License Version 1.0 (the "License");
 *  you may not use this file except in compliance with the
 *  License. You may obtain a copy of the License at
 *  http://www.ibphoenix.com/main.nfs?a=ibphoenix&page=ibp_idpl.
 *
 *  Software distributed under the License is distributed AS IS,
 *  WITHOUT WARRANTY OF ANY KIND, either express or implied.
 *  See the License for the specific language governing rights
 *  and limitations under the License.
 *
 *  The Original Code was created by Nickolay Samofatov
 *  for the Firebird Open Source RDBMS project.
 *
 *  Copyright (c) 2004 Nickolay Samofatov <nickolay@broadviewsoftware.com>
 *  and all contributors signed below.
 *
 *  All Rights Reserved.
 *  Contributor(s): ______________________________________.
 *
 *  2008 Khorsun Vladyslav
 */

#include "TraceConfiguration.h"
#include "TracePluginImpl.h"


extern "C" {

FB_DLL_EXPORT ntrace_boolean_t trace_create(TraceInitInfo* initInfo, const TracePlugin** plugin)
{
	try
	{
		const char* dbname = initInfo->getDatabaseName();
		if (!dbname)
			dbname = "";

		TracePluginConfig config;
		TraceCfgReader::readTraceConfiguration(initInfo->getConfigText(), dbname, config);

		TraceConnection* connection = initInfo->getConnection();
		if (!config.enabled ||
			(config.connection_id && connection &&
				(connection->getConnectionID() != SLONG(config.connection_id))))
		{
			*plugin = NULL;
			return true; // Plugin is not needed, no error happened.
		}

		TraceLogWriter* logWriter = initInfo->getLogWriter();
		if (logWriter) {
			config.log_filename = "";
		}

		*plugin = TracePluginImpl::createFullPlugin(config, initInfo);

		return true; // Everything is ok, we created a plugin

	}
	catch(Firebird::Exception& ex)
	{
		try
		{
			// Create skeletal plugin object in order to return error to caller
			*plugin = TracePluginImpl::createSkeletalPlugin();

			// Stuff exception to error buffer now
			TracePluginImpl::marshal_exception(ex);

		}
		catch (Firebird::Exception&)
		{
			// We faced total lack of luck here. Most probably this is
			// out-of-memory error, but nothing we can tell to our caller
			// about it.
			*plugin = NULL;
		}

		return false;
	}
}

} // extern "C"
