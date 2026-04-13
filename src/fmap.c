#include "fmap.h"
#include <inttypes.h> // uint64_t

// Funcao que transforma uma string em um uint64_t atraves do Hash.
uint64_t
hash_key(const char * key)
{
	uint64_t hash = FNV_OFFSET;

	for(const char * k = key; (*k) != '\0'; key++)
	{
		hash ^= (int)(unsigned char)(*k);
		hash *= FNV_PRIME;
	}
	return hash;
}
