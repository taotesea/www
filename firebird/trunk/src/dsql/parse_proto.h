/*
 *	PROGRAM:	Dynamic SQL runtime support
 *	MODULE:		parse_proto.h
 *	DESCRIPTION:	Prototype Header file for parse.cpp
 *
 * The contents of this file are subject to the Interbase Public
 * License Version 1.0 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy
 * of the License at http://www.Inprise.com/IPL.html
 *
 * Software distributed under the License is distributed on an
 * "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, either express
 * or implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code was created by Inprise Corporation
 * and its predecessors. Portions created by Inprise Corporation are
 * Copyright (C) Inprise Corporation.
 *
 * All Rights Reserved.
 * Contributor(s): ______________________________________.
 */

#ifndef DSQL_PARSE_PROTO_H
#define DSQL_PARSE_PROTO_H

#ifdef __cplusplus
extern "C" {
#endif

int dsql_yyparse(USHORT, USHORT, USHORT, BOOLEAN *);

void LEX_dsql_init(void);
void LEX_string(TEXT *, USHORT, SSHORT);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif //  DSQL_PARSE_PROTO_H

