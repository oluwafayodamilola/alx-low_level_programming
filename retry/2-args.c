#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: total number of arguments in the program
 * @argv: the arguments passed to the prog
 *
 * Return: always 0;
 *
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
