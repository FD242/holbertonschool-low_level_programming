#include <stdio.h>
#include <string.h>

/**
 * _strspn - function to get the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to match
 * Return: the number of bytes in the initial segment of s
 *         which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i, j;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = 0; accept[j] != '\0'; j++) {
            if (s[i] == accept[j]) {
                count++;
                break;
            }
        }
        if (accept[j] == '\0') {
            break;
        }
    }
    return count;
}

int main(void)
{
    char str[] = "hello, world";
    char accept[] = "hl";
    unsigned int len = _strspn(str, accept);

    printf("Length of prefix substring: %u\n", len);
    return 0;
}

