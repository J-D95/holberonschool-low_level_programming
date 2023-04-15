#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * key_index - function that gives the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
