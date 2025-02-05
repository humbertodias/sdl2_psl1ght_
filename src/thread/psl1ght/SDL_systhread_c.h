/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2010 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Sam Lantinga
    slouken@libsdl.org
*/
// #include "SDL_config.h"
#include "../../SDL_internal.h"

#include <signal.h>
#include <lv2/thread.h>

typedef sys_ppu_thread_t SYS_ThreadHandle;

/* Functions needed to work with system threads in other portions of SDL */
extern void SDL_MaskSignals(sigset_t * omask);
extern void SDL_UnmaskSignals(sigset_t * omask);

/* vi: set ts=4 sw=4 expandtab: */
