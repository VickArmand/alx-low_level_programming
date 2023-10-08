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
	int flag = 0;

	if (!ht || ht->array == NULL)
		return;
	index = 0;
	printf("{");
	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
		index++;
	}
	printf("}\n");
}
