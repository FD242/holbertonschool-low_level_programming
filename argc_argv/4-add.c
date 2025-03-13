#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers from arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;
size_t j;

if (argc <= 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (0);
}
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}

