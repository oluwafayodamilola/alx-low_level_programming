#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of straight line to print
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');

}
