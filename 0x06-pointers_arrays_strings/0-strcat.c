#include "holberton.h"

/**
 **_strcat - concatenates two strings
 *
 *@dest: string being concatenated
 *@src: string being appended
 *
 *Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp)
		temp++;
	while ((*temp++ = *src++))
		;
	*temp = '\0';
	return (dest);
}
