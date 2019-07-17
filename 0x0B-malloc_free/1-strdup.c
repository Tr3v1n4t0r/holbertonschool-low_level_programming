#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *
 *@str: char
 *
 *Return: NULL if str=NULL or a pointer to newly allocted space
 */
char *_strdup(char *str)
{
	char *space;
	unsigned int i, length;

	if (str == NULL)
		return (NULL);

	length = 0;

	while (str[length] != '\0')
		length++;

	space = malloc(sizeof(char) * (length + 1));

	if (space == NULL)
		return (NULL);

	for (i = 0; i < length + 1; i++)
		*(space + i) = *(str + i);

	return (space);
}
