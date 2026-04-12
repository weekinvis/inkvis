#pragma once
#ifndef _fmap_h__
#define _fmap_h__

#include <inttypes.h> // uint64_t

#define FNV_OFFSET 14695981039346656037UL // Fowler-No-Vo valor do OFFSET
#define FNV_PRIME  1099511628211UL        // Fowler-No-Vo valor do Primo 

// scanf("%" SCNu64, &x);
// printf("%" PRIu64 "\n", x);

uint64_t hash_key(const char * key);

#endif // _fmap_h__
