#include "holberton.h"

/**
 *_strchr - locates a character
 *
 *@s: string
 *@c: char
 *
 *Return: a pointer to char c in string s, or NULL in no char
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
		if (*s == c)
			return (s);
	if (*s == c)
		return (s)
	return ('\0');
}
