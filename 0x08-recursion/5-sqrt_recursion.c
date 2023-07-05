#include "main.h"


/**
 * find_root - finds the sqaure root of a number
 * @n: number
 * @val: number to test the root
 * Return: root or -1 if not found
 */

int find_root(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val <= n)
		return (find_root(n, val + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (find_root(n, 0));
}
