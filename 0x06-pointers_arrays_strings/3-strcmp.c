#include "holberton.h"

/**
 **_strcmp - concatenates two strings
 *
 *@s1: string 1
 *@s2: string 2
 *
 *Return: a pointer to the resulting string dest
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2 ; s1++, s2++)
	{
		if (*s1 == '\0')
			return (0);
	}
	return (*s1 - *s2);
}
