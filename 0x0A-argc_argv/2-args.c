#include <stdio.h>

/**
 *main - prints all arguments passed to it
 *
 *@argc: number of arguments
 *@argv: arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 0)
	{
		for (i = 0; argv[i]; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
