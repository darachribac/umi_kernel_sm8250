/* SPDX-License-Identifier: GPL-2.0 */
#undef TRACE_SYSTEM
#define TRACE_SYSTEM memory

#define TRACE_INCLUDE_PATH trace/hooks
#if !defined(_TRACE_HOOK_MEMORY_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_HOOK_MEMORY_H
#include <linux/tracepoint.h>
#include <trace/hooks/vendor_hooks.h>
/*
 * Following tracepoints are not exported in tracefs and provide a
 * mechanism for vendor modules to hook and extend functionality
 */

#endif /* _TRACE_HOOK_MEMORY_H */
/* This part must be outside protection */
#include <trace/define_trace.h>

// Manual declarations for disabled tracepoints
static inline void trace_android_vh_set_memory_x(unsigned long addr, int nr_pages) {}
static inline void trace_android_vh_set_memory_nx(unsigned long addr, int nr_pages) {}
static inline void trace_android_vh_set_memory_ro(unsigned long addr, int nr_pages) {}
static inline void trace_android_vh_set_memory_rw(unsigned long addr, int nr_pages) {}
