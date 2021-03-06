/* sp-ul_db module
 *
 * Copyright (C) 2007 1&1 Internet AG
 *
 * This file is part of openser, a free SIP server.
 *
 * openser is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * openser is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program; if not, write to the Free Software 
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef SP_P_USRLOC_UL_DB_TRAN_H
#define SP_P_USRLOC_UL_DB_TRAN_H

#include "../../lib/srdb1/db.h"
#include "ul_db_handle.h"

int ul_db_tran_start(ul_db_handle_t * handle, int working[]);

int ul_db_tran_commit(ul_db_handle_t * handle, int working[]);

int ul_db_tran_rollback(ul_db_handle_t * handle, int working[]);

int get_working_sum(int working[], int no);

#endif
