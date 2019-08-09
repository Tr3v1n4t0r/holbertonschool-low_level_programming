#include "holberton.h"

/**
 *get_bit - returns the value of a bit at a given index
 *
 *@n: unsigned long int
 *@index: the index
 *
 *Return: returns the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (!(index < (8 * sizeof(unsigned long int))))
		return (-1);

	return ((n >> index) & 1);
}
