#include "hash_tables.h"

/**
 * hash_table_set - function that craetes a node
 * @key: key
 * @value: value of the key
 * Return: new hash node
 */

hash_node_t *create_node(const unsigned char *key, const unsigned char *value)
{
	hash_node_t *new_node;
	char *key;
	char *value;

	// allocating memory
	char *new_key = strdup(key);
	if (!new_key)
		return (NULL);


	// allocating memory
	char *new_value = strdup(value);
	if (!new_value)
		return (NULL);

	// allocating memory for the new node

	hash_node_t *new_node = malloc(sizeof( hash_node_t));
	if (!new_node)
	{
		free(new_key);
		free(new_value);
		return NULL;
	}


	new_node->next = NULL;
	new_node->key = new_key;
	new_node->value = new_value;

	return new_node;
}


/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value of the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
to be continued...

