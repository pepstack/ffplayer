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
 * @filename   frame.h
 *  ffplayer frame api
 *
 * @author     350137278@qq.com
 * @version    0.0.1
 * @create     2020-03-20 17:16:05
 * @update     2020-03-20 22:26:05
 */
#ifndef FFP_FRAME_H
#define FFP_FRAME_H

#if defined(__cplusplus)
extern "C"
{
#endif

#include "player.h"

extern void frame_queue_unref_item(frame_t *vp);
extern int frame_queue_init(frame_queue_t *f, packet_queue_t *pktq, int max_size, int keep_last);
extern void frame_queue_destory(frame_queue_t *f);
extern void frame_queue_signal(frame_queue_t *f);
extern frame_t *frame_queue_peek(frame_queue_t *f);
extern frame_t *frame_queue_peek_next(frame_queue_t *f);
extern frame_t *frame_queue_peek_last(frame_queue_t *f);
extern frame_t *frame_queue_peek_writable(frame_queue_t *f);
extern frame_t *frame_queue_peek_readable(frame_queue_t *f);
extern void frame_queue_push(frame_queue_t *f);
extern void frame_queue_next(frame_queue_t *f);
extern int frame_queue_nb_remaining(frame_queue_t *f);
extern int64_t frame_queue_last_pos(frame_queue_t *f);

#ifdef __cplusplus
}
#endif

#endif /* FFP_FRAME_H */
