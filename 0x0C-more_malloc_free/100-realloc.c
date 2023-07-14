#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size:new size, in bytes of the new memory block
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp;
	int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		temp = malloc(new_size);
	}
	if (ptr == NULL)
	{
		temp = malloc(new_size);
		if (temp == NULL)
			return (NULL);
		return (temp);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	temp = malloc(new_size);
	if (temp == NULL)
		return (NULL);
	for (i = 0; *((char *)ptr) != '\0'; i++)
	{
		*((char *)temp + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (temp);
}
