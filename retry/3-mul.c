#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers.
 * @argc: total number of argument in the program
 * @argv: arguments passed to the prog
 *
 * Return: always 0;
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		for (int i = 1; i < 2; i++)
		{
			printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		}
	}
}
