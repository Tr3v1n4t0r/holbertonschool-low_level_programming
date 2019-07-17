#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - creates an array of integers
 *
 *@size: unsigned int
 *@c: char
 *
 *Return: NULL if size 0 or a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *) malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(arr + i) = c;
	return (arr);
}
