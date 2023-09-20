#include "main.h"
/**
 * mul - multiplies two integers
 * @a : first number
 * @b : second number
 * Return: product
 */

int mul(int a, int b)
{
	return (a * b);
}
/**
 * add - returns the sum of 2 integers
 * @n1: first number
 * @n2: second number
 * Return: sum
 */

int add(int n1, int n2)
{
	return (n1 + n2);
}

/**
 * sub - subtracts two integers
 * @a: first number
 * @b: second number
 * Return: resulting subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * div - divides two integers
 * @a: first number
 * @b: second number
 * Return: division
 */
int div(int a, int b)
{
	if (b < 1)
		return (0);
	return (a / b);
}
/**
 * mod - returns the remainder(modulus) of the division two integers
 * @a: first number
 * @b: second number
 * Return: modulus
 */
int mod(int a, int b)
{
	return (a % b);
}
