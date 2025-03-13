#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: accept
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int found_in_accept;

	for (i = 0; s[i] != '\0'; i++)
	{
		found_in_accept = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found_in_accept = 1;
				break;
			}
		}

		if (found_in_accept)
		{
			count++;
		}
		else
		{
			break;
		}
	}

	return (count);
}
 
