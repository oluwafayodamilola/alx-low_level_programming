#include "main.h"

/**
 * print_numbers - prints from 0 to 9, followed by a new line.
 *
 * Return: 0
 */
void print_numbers(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
		_putchar(ch + '0');
	_putchar('\n');
}
