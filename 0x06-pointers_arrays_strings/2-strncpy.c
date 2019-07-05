#include "holberton.h"

/**
 **_strncpy - concatenates two strings
 *
 *@dest: string being concatenated
 *@src: string being appended
 *@n: number of bytes
 *
 *Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest;
	int z;

	for (z = 0 ; z < n && *src != '\0' ; z++)
		*tmp++ = *src++;
	for (; z < n ; z++)
		*tmp++ = '\0';
	return (dest);
}
