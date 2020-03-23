/***********************************************************************
 * Copyright (c) 2008-2080 pepstack.com, 350137278@qq.com
 *
 * ALL RIGHTS RESERVED.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 **********************************************************************/
/**
 * @filename   packet.h
 *  ffplayer packet api
 *
 * @author     350137278@qq.com
 * @version    0.0.1
 * @create     2020-03-20 17:16:05
 * @update     2020-03-20 22:26:05
 */
#ifndef FFP_PACKET_H
#define FFP_PACKET_H

#if defined(__cplusplus)
extern "C"
{
#endif

#include "player.h"

extern int packet_queue_init(packet_queue_t *q);
extern int packet_queue_put(packet_queue_t *q, AVPacket *pkt);
extern int packet_queue_get(packet_queue_t *q, AVPacket *pkt, int block);
extern int packet_queue_put_nullpacket(packet_queue_t *q, int stream_index);
extern void packet_queue_destroy(packet_queue_t *q);
extern void packet_queue_abort(packet_queue_t *q);

#ifdef __cplusplus
}
#endif

#endif /* FFP_PACKET_H */
