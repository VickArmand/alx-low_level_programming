#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: char pointer (the buffer)
 * @size: buffer size
 */

void print_buffer(char *b, int size)
{
	int i = 0, j, k;

	if (size <= 0)
		printf("\n");
	else
	{
		for (; i < size; i += 10)
		{
			printf("%08x: ", b[i]);
			j = i;
			while (j < i + 10 && (j + 1) % 10 != 0)
			{
				if (j % 10 == 0)
					printf("%02x%02x", b[j], b[j + 1]);
				else if ((j + 1) % 10 == 9)
				{
					printf(" %02x%02x ", b[j], b[j + 1]);
					k = i;
					while (k < (i + 10) && k < size)
					{
						if (k % 10 == 9)
							printf("%c\n", b[k]);
						else if (b[i] == '\0' || b[i] == '\1' ||
								b[i] == '\2' || b[i] == '\3' || b[i] == '\4'
								|| b[i] == '\5' || b[i] == '\6' || b[i] == '\7' || b[i] == '\n')
							printf(".");
						else
							printf("%c", b[k]);
						k++;
					}
				}
				else
					printf(" %02x%02x", b[j], b[j + 1]);
				j += 2;
			}
		}
	}
}
