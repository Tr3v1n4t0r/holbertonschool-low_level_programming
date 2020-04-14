#include "search_algos.h"

/**
 *print_array - Print the elements of an array betweentwo indexes
 *
 *@array: The array to print
 *@start: Starting index
 *@end: Ending index
 */
void print_array(int *array, unsigned int start, unsigned int end)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 *binary_search - Search for the value in a sorted array of integers
 *
 *@array: Pointer to the first element of the array
 *@size: Number of elements
 *@value: Value to search for
 *
 *Return: First index where value is located, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int i = 0;
	unsigned int j = size - 1;
	unsigned int cur;

	if (!array)
		return (-1);

	while (i <= j)
	{
		print_array(array, i, j);
		cur = (i + j) / 2;
		if (array[cur] == value)
			return (cur);
		else if (array[cur] > value)
			j = cur - 1;
		else if (array[cur] < value)
			i = cur + 1;
	}
	return (-1);
}
