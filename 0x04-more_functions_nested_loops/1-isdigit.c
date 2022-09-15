#include "main.h"

/**
 * _isdigit - check if a given character is digit
 * @c: The character to check
 *
 * Return: 1 if success
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
