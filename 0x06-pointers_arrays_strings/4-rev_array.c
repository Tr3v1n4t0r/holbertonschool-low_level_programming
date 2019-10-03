#include "holberton.h"

/**
 *reverse_array - reverses the contents of an array
 *
 *@a: pointer to an int array
 *@n: number of elements
 */
void reverse_array(int *a, int n)
{
	int h, i, j = n / 2;

	for (i = 0; j < n; i++, n--)
	{
		h = a[i];
		a[i] = a[n - 1];
		a[n - 1] = h;
	}
}
