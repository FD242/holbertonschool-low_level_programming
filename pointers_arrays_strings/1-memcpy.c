#include "main.h"

/**
 * _memcpy - copies from source to dest values in array
 * @dest: destination
 * @src: source
 * @n: n amount
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}

