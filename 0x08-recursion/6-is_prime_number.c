#include "main.h"

/**
 * check_prime - verifies if a number is prime
 * @n: number to test
 * @val: samples
 * Return: 1 if prime, 0 otherwise
 */

int check_prime(int n, int val)
{
	if (n == val)
		return (1);
	else if (n % val == 0)
		return (0);
	return (check_prime(n, val + 1));
}
/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number to be verified
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n % 2 == 0)
		return (0);
	else if (n == 2)
		return (1);
	return (check_prime(n, 3));
}
