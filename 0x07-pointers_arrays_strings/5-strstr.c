#include "holberton.h"

/**
 *_strstr - locates a substring
 *
 *@haystack: string
 *@needle: substring
 *
 *Return: a pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int flag = 0;

	if ((*haystack == '\0' || *needle == '\0'))
		return ('\0');

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = i; ; j++)
			{
				if (needle[j - i] == '\0')
				{
					flag = 1;
					break;
				}
				if (haystack[j] == needle[j - i])
					continue;
				else
					break;
			}
		}
		if (flag == 1)
			break;
	}

	if (flag)
		return (haystack + i);
	else
		return ('\0');
}
