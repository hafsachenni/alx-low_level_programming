#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the hash table
 * Return: new hash table or null if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_new_table;

	my_new_table = malloc(sizeof(hash_table_t));
	my_new_table->array = malloc(sizeof(hash_node_t *) * size);

	return my_new_table;
}

