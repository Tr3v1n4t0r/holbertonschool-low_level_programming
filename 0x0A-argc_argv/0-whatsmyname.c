#include <stdio.h>

/**
 *main - prints its name
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
