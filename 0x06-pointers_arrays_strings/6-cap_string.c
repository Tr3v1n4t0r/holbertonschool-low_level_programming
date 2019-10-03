#include "holberton.h"

/**
 *cap_string - capitalizes all words
 *
 *@s: pointer
 *
 *Return: char
 */
char *cap_string(char *s)
{
	int i, set = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			set = 1;
		else if (s[i] >= '0' && s[i] <= '9')
			set = 1;
		else if ((s[i] >= 'a' && s[i] <= 'z') && set == 0)
		{
			s[i] -= 32;
			set = 1;
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		    s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||
		    s[i] == '?' || s[i] == '\"' || s[i] == '(' || s[i] == ')' ||
		    s[i] == '{' || s[i] == '}')
			set = 0;
	}
	return (s);
}
