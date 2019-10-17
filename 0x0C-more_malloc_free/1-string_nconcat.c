#include "holberton.h"
#include <stdlib.h>

/**
 *string_nconcat - concatonates 2 strings
 *
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes
 *
 *Return: character pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	int i, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = _strlen(s2);

	if (n > (unsigned int)size)
		n = size;
	size = _strlen(s1);

	s3 = malloc(sizeof(char) * (size + n + 1));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];
	for (size = 0; n > 0; i++, n--, size++)
		s3[i] = s2[size];
	s3[i] = '\0';

	return (s3);
}

/**
 *_strlen - finds the length of a string
 *
 *@str: string to count
 *
 *Return: length of string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
