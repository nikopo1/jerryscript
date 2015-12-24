/* Copyright 2015 Samsung Electronics Co., Ltd.
 * Copyright 2015 University of Szeged
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef RCS_SNAPSHOT_H
#define RCS_SNAPSHOT_H


#include "rcs-cpointer.h"

typedef struct
{
  cpointer_t literal_id;
  uint32_t literal_offset;
} lit_mem_to_snapshot_id_map_entry_t;

#ifdef JERRY_ENABLE_SNAPSHOT

extern bool
lit_dump_literals_for_snapshot (uint8_t *,
                                size_t,
                                size_t *,
                                lit_mem_to_snapshot_id_map_entry_t **,
                                uint32_t *,
                                uint32_t *);

extern bool
rcs_load_literals_from_snapshot (const uint8_t *,
                                 uint32_t,
                                 lit_mem_to_snapshot_id_map_entry_t **,
                                 uint32_t *);

#endif /* JERRY_ENABLE_SNAPSHOT */

#endif /* RCS_SNAPSHOT_H */