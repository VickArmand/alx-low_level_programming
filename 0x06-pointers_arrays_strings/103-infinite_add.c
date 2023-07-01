#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first char pointer
 * @n2: second char pointer
 * @r: buffer for storing sum
 * @size_r: buffer size
 * Return: returns a pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, carry = 0;

	while (n2[i] != '\0')
		i++;

	while (n1[j] != '\0')
		j++;

	if (i > size_r || j > size_r)
		r = 0;
	else
	{
		i--, j--, size_r--;
		while (size_r >= 0)
		{
			int digit1 = i >= 0 ? n2[i] - '0' : 0;
			int digit2 = j >= 0 ? n1[j] - '0' : 0;
			int sum = digit1 + digit2 + carry;

			carry = sum / 10;
			sum = sum % 10;
			r[size_r] = sum + '0';
			i--;
			j--;
			size_r--;
		}
	}

	return (r);
}
