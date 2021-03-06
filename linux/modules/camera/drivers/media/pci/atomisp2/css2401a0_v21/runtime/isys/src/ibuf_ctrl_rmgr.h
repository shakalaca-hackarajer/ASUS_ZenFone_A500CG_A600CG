/*
 * Support for Intel Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 - 2014 Intel Corporation. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef __IBUF_CTRL_RMGR_H_INCLUDED__
#define __IBUF_CTRL_RMGR_H_INCLUDED__

#define MAX_IBUF_HANDLES	24
#define MAX_INPUT_BUFFER_SIZE	(64 * 1024)
#define IBUF_ALIGN		8

typedef struct ibuf_handle_s ibuf_handle_t;
struct ibuf_handle_s {
	uint32_t	start_addr;
	uint32_t	size;
	bool		active;
};

typedef struct ibuf_rsrc_s ibuf_rsrc_t;
struct ibuf_rsrc_s {
	uint32_t	free_start_addr;
	uint32_t	free_size;
	uint16_t	num_active;
	uint16_t	num_allocated;
	ibuf_handle_t	handles[MAX_IBUF_HANDLES];
};

#endif /* __IBUF_CTRL_RMGR_H_INCLUDED */

