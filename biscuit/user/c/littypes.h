#pragma once

typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long size_t;
typedef long ssize_t;

typedef unsigned char u8;
typedef unsigned long uint64_t;

typedef unsigned long time_t;
typedef unsigned long mode_t;
typedef unsigned long dev_t;
typedef long off_t;
typedef long pid_t;
typedef unsigned long socklen_t;

#define NULL   ((void *)0)

#define va_start(ap, last) __builtin_va_start(ap, last)
#define va_arg(ap, type)   __builtin_va_arg(ap, type)
#define va_end(ap)         __builtin_va_end(ap)

typedef __builtin_va_list va_list;
