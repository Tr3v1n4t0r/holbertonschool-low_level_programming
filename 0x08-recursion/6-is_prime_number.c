#include "holberton.h"

/**
 *is_prime_number - check if n is prime
 *
 *@n: num
 *
 *Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (prime(n, 2));
}

/**
 *prime - checks prime
 *
 *@n: num
 *@i: check
 *
 *Return: int
 */
int prime(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	return (prime(n, i + 1));
}
