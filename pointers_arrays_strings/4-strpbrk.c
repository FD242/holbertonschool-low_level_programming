#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: containing the set of bytes
 * Return: a pointer to the matched byte, sometimes null
 */

char *_strpbrk(char *s, char *accept)
{

	int index;

	while (*s)
	{
	for (index = 0; accept[index]; index++)
	{
	if (*s == accept[index])
	return (s);
	}

	s++;

	}

	return ('\0');

}
