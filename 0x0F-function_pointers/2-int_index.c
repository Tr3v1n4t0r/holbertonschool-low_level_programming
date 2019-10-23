#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *
 *@array: array
 *@size: number of elements in array
 *@cmp: pointer to function used to compare values
 *
 *Return: index of first element with an int or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((*cmp) == NULL || size <= 0 || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}

	return (-1);
}
