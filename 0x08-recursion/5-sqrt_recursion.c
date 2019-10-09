#include "holberton.h"

/**
 *_sqrt_recursion - returns the natural square root of a number
 *
 *@n: num
 *
 *Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (n);
	return (root(n, 1));		
}

/**
 *root - finds the root of n
 *
 *@n: int
 *@i: possible root
 *
 *Return: int
 */
int root(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (root(n, i + 1));
}
