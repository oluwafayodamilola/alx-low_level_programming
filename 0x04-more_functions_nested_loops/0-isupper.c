#include "main.h"

/**
 * main - the entry of the program
 * _isupper(intc) - return 1 for uppercase and 0 for lowercase
 *
 * Return: 1;
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
