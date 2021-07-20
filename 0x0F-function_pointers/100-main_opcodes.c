#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i, n;
if (argc != 2)
{
printf("Error\n");
return (1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < n; i++)
{
printf("%02hhx", *((char *)main + i));
if (i < n - 1)
{
printf(" ");
}
else
{
printf("\n");
}
}
return (0);
}
