#include <stdio.h>
#include "main.h"

/**
 * is_divisible - helper function to check if a number is divisible
 * @n: input number
 * @i: potential divisor
 *
 * Return: 1 if not divisible, otherwise 0
 */

int is_divisible(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}

	return (is_divisible(n, i + 1));
}

/**
 * is_prime_number - check if input integer is a prime number
 * @n: input number
 *
 * Return: 1 if prime number, otherwise 0
 */

int is_prime_number(int n)
{
	return (is_divisible(n, 2));
}

