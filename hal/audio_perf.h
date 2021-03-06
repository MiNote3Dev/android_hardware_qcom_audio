/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __QAUDIOPERF_H__
#define __QAUDIOPERF_H__

#ifdef __cplusplus
extern "C" {
#endif

int audio_streaming_hint_start();
int audio_streaming_hint_end();

int audio_low_latency_hint_start();
int audio_low_latency_hint_end();

#ifdef __cplusplus
}
#endif

#endif //__QCAMREAPERF_H__
