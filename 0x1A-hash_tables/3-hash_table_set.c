#include "hash_tables.h"
/**
 * new_node - creates a new node
 * @key: key
 * @value: value associated with key
 * Return: pointer to newly created node
 */
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->key == NULL)
	{
		free(new->key), free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash_table
 * @key: key
 * @value: value associated with key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *ptr;
	unsigned long int i;

	if (strlen(key) == 0 || !ht)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	new = new_node(key, value);
	if (!new)
		return (0);
	if (ht->array[i] == NULL)
		ht->array[i] = new;
	else
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, key) == 0)
			{
				free(ptr->value);
				ptr->value = strdup(value);
				if (!ptr->value)
				{
					free(new);
					return (0);
				}
				return (1);
			}
			ptr = ptr->next;
		}
		new->next = ht->array[i];
		ht->array[i] = new;
	}
	return (1);
}
