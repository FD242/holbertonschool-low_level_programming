#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: string
 * @needle: substring
 * Return: pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
				{
					return (&haystack[i]);
				}
				j++;
			}
		}
	}

	return (0);
}

