#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int index;

	if (!ht || ht->array == NULL)
		return;
	index = 0;
	temp = ht->array[index];
	printf("{");
	while ((temp = ht->array[index]) && index < ht->size)
	{

		while (temp->next)
		{
			printf("'%s': '%s', ", temp->key, temp->value);
			temp = temp->next;
		}
		printf("'%s': '%s'", temp->key, temp->value);
		index++;
	}
	printf("}\n");
}
