#include "holberton.h"
#include <stdlib.h>

/**
 *str_concat - concatonates two strings
 *
 *@s1: string 1
 *@s2: string 2
 *
 *Return: a pointer, or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *temp;

	temp = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (temp == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *s1; i++, s1++)
		temp[i] = *s1;
	for (; *s2; i++, s2++)
		temp[i] = *s2;
	temp[i] = '\0';

	return (temp);
}

/**
 *_strlen - gets the length of a string
 *
 *@s: string
 *
 *Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
