#ifndef __ASM_ALPHA_BITSPERLONG_H
#define __ASM_ALPHA_BITSPERLONG_H

#ifdef __aarch64__
#define __BITS_PER_LONG 64
#else
#define __BITS_PER_LONG 32
#endif

#include <asm-generic/bitsperlong.h>

#endif /* __ASM_ALPHA_BITSPERLONG_H */
