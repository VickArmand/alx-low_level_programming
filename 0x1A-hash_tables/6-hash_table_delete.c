#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;

	if (!ht)
		return;
	if (ht->size == 0 || ht->array == NULL)
		free(ht);
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp->next;
		}
	}
	free(ht->array);
	free(ht);
}
