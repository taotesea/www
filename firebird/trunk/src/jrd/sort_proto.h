/*
 *	PROGRAM:	JRD Access Method
 *	MODULE:		sort_proto.h
 *	DESCRIPTION:	Prototype header file for sort.cpp
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

#ifndef JRD_SORT_PROTO_H
#define JRD_SORT_PROTO_H


#ifdef SCROLLABLE_CURSORS
void	SORT_diddle_key(UCHAR *, struct scb *, bool);
void	SORT_get(ISC_STATUS *, struct scb *, ULONG **, RSE_GET_MODE);
void	SORT_read_block(ISC_STATUS *, struct sfb *, ULONG, BLOB_PTR *, ULONG);
#else
void	SORT_get(ISC_STATUS *, struct scb *, ULONG **);
ULONG	SORT_read_block(ISC_STATUS *, struct sfb *, ULONG, BLOB_PTR *,
							 ULONG);
#endif

void	SORT_error(ISC_STATUS *, struct sfb *, TEXT *, ISC_STATUS, int);
void	SORT_fini(struct scb *, struct att *);
struct scb*	SORT_init(ISC_STATUS*, USHORT, USHORT, const struct skd*,
						FPTR_REJECT_DUP_CALLBACK, void*, struct att*, UINT64);
void	SORT_put(ISC_STATUS *, struct scb *, ULONG **);
void	SORT_shutdown(struct att *);
bool	SORT_sort(ISC_STATUS *, struct scb *);
ULONG	SORT_write_block(ISC_STATUS *, struct sfb *, ULONG, BLOB_PTR *,
							  ULONG);

#endif // JRD_SORT_PROTO_H

