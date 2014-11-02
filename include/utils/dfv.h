/*
 * Device File-based I/O Virtualization (DFV)
 * File: dfv.h
 *
 * Copyright (c) 2014 Rice University, Houston, TX, USA
 * All rights reserved.
 *
 * Authors: Ardalan Amiri Sani <arrdalan@gmail.com>
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

#ifndef _DFV_H_
#define _DFV_H_

#include <utils/Log.h>
#include <sys/stat.h>

#define DFVLOG_ERR(fmt, args...) ALOGD("%s: " fmt, __func__, ##args)

static int file_present(char *filepath)
{
    struct stat buf;
    if (stat(filepath, &buf) != -1)
        return 1;
    
    return 0;
}

#endif /* _DFV_H_ */
