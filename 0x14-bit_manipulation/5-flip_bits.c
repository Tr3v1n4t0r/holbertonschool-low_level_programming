#include "holberton.h"

/**
 *flip_bits -  returns the number of bits you would need to flip to get from
 *one number to another
 *
 *@n: first number
 *@m: second number
 *
 *Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int a = (n ^ m);

	while (a)
	{
		count += a & 1;
		a >>= 1;
	}

	return (count);
}
