#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: char pointer (the buffer)
 * @size: buffer size
 */

void print_8bytes(char *b, int size);
void print_2bytes(char *b, int size);
void print_buffer(char *b, int size)
{
	int i = 0;

	print_8bytes(b, size);
	print_2bytes(b, size);
	if (size <= 0)
		printf("\n");
	else
	{
		while (i < size)
		{
			if (i % 10 == 9)
				printf("%c\n", b[i]);
			else if (b[i] == '\0'|| b[i] == '\1'|| b[i] == '\2'|| b[i] == '\3'|| b[i] == '\4' || b[i] == '\5' || b[i] == '\6' || b[i] == '\7' || b[i] == '\n')
				printf(".");
			else
				printf("%c", b[i]);
			i++;
		}
	}
}

/**
 * print_2bytes - function that prints buffer address in hexadecimal
 * @b: char pointer (the buffer)
 * @size: buffer size
 */

void print_2bytes (char *b, int size)
{
	int i = 0;

	if (size <= 0)
                printf("\n");
        else
        {
                while (i < size)
                {
			if (i % 10 == 0)
				printf("%02x%02x", b[i], b[i + 1]);
			else if ((i + 1) % 10 == 9)
				printf(" %02x%02x\n", b[i], b[i + 1]);
                        else
                                printf(" %02x%02x", b[i], b[i + 1]);
                        i += 2;
                }
        }
}

/**
 * print_8bytes - function that prints a buffer
 * @b: char pointer (the buffer)
 * @size: buffer size
 */

void print_8bytes(char *b, int size)
{
	int i = 0;

        if (size <= 0)
                printf("\n");
        else
        {
                while (i < size)
                {
			printf("%08x: \n", b[i]);
                        i += 10;
                }
        }
}
