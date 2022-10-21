#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			temp = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = temp;
		}
	}
	free(ht->array);
	free(ht);
}
