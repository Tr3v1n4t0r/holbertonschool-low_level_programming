#include "holberton.h"
#include <stdlib.h>

/**
 *argstostr - concatonates all arguments
 *
 *@ac: int
 *@av: int
 *
 *Return: pointer of NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, length;
	char *temp;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, length = 0; i < ac; i++)
		length += _strlen(av[i]);

	temp = malloc(sizeof(char) * (length + ac + 1));
	if (temp == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			temp[k++] = av[i][j];
		temp[k++] = '\n';
	}
	temp[k] = '\0';
	
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
