#include "holberton.h"
#include <stdio.h>

/**
 *print_array - prints n elements of an array
 *
 *@a: int
 *
 *@n: int
 *
 *Return: 0
 */
void print_array(int *a, int n)
{
	int x;
	for (x = 0; x < n ; x++)
	{
		if (x != 0)
			printf (", %d", *(a + x));
		else
			printf ("%d", *(a + x));
	}
	printf ("\n");
}
