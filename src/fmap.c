#include "fmap.h"

// Funcao que transforma uma string em um int e faz o Hash.
uint64_t
hash_key(const char * key)
{
	uint64_t hash = 0;

	for(const char * k = key; (*k) != '\0'; key++)
	{
		hash ^= (int)(unsigned char)(*k);
		hash *= FNV_PRIME;
	}
	return hash;
}
