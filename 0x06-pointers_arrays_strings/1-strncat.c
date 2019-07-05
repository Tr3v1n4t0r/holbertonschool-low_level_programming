#include "holberton.h"

/**
 **_strcat - concatenates two strings
 *
 *@dest: string being concatenated
 *@src: string being appended
 *@n: number of bytes
 *
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int z;

	while (*temp)
		temp++;
	for (z = 0 ; z < n && z <= *src ; z++)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}
