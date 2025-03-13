#include "main.h"
#include <math.h>

/**
 * sqrt_recursion - evaluating from 1 to n
 * @a: same as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1, otherwise -1
 */

int sqrt_recursion(int a, int b)
{
if (b * b == a)
return (b);
else if (b * b > a)
return (-1);

return (sqrt_recursion(a, b + 1));
}

/**
 * _sqrt_recursion - wrapper function to start recursion
 * @n: number to find square root of
 *
 * Return: square root of n if exists, otherwise -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_recursion(n, 1));
}

