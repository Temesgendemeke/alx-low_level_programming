#include "hash_tables.h"
/**
  * hash_table_create - creates hash table
  * @size: size of hash table to be created
  * Return: table otherwise NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_node_t));
	if (table == NULL)
	{
		return (NULL);
	}
    table->size = size;
    
	return (table);
}
