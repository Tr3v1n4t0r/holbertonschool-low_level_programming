#include "holberton.h"

/**
 *_islower - Entry point
 *
 *@c: number
 *
 *Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
