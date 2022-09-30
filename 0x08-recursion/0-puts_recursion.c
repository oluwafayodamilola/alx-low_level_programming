#include "main.h"

/**
 * _puts_recursion - prints strings character recursively
 * @s: this takes the value of _puts_recursion
 *
 * Return (0);
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
