#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer to new space in memory or null
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strDup;
	int i;
	unsigned int j, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	index = 0;
	while (s1[index] != '\0')
		index++;
	strDup = malloc(sizeof(char) * (index + n + 1));
	if (strDup == NULL)
		return NULL;
	index = i = j = 0;
	while (s1[index] != '\0')
	{
		strDup[i] = s1[index];
		i++, index++;
	}
	while (j <= n && s2[j] != '\0')
	{
		strDup[i] = s2[j];
		i++, j++;
	}
	strDup[i] = '\0';
	return (strDup);
}
