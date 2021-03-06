/**
 * $Id$
 *
 * Copyright (C) 2011 Daniel-Constantin Mierla (asipto.com)
 *
 * This file is part of Kamailio, a free SIP server.
 *
 * Kamailio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * Kamailio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef _REDIS_CLIENT_H_
#define _REDIS_CLIENT_H_

#include <hiredis/hiredis.h>

#include "../../str.h"
#include "../../parser/parse_param.h"
#include "../../mod_fix.h"

int redisc_init(void);
int redisc_destroy(void);
int redisc_add_server(char *spec);
int redisc_exec(str *srv, str *cmd, str *argv1, str *argv2, str *argv3,
		str *res);

typedef struct redisc_server {
	str *sname;
	unsigned int hname;
	param_t *attrs;
	redisContext *ctxRedis;
	struct redisc_server *next;
} redisc_server_t;

typedef struct redisc_reply {
	str rname;
	unsigned int hname;
	redisReply *rplRedis;
	struct redisc_reply *next;
} redisc_reply_t;

typedef struct redisc_pv {
	str rname;
	redisc_reply_t *reply;
	str rkey;
	int rkeyid;
	gparam_t pos;  /* Array element position. */
} redisc_pv_t;

redisc_reply_t *redisc_get_reply(str *name);
#endif
