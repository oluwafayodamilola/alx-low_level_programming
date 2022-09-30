#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: number of arguments passed into the program
 * @argv: the arguments passed into the program
 * Return: always 0
 */


int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
}
