#include "main.h"

/**
 * _isupper - return 1 for uppercase and 0 for lowercase
 * @c: The character to check
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
