#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_djb2 - function that implement the djb2 algprithm
 * @str: string to iterate
 *
 * Return: an unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
