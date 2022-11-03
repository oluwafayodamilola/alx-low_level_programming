#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as
 * a parameter.
 *
 * @str: str to copy from
 * Return: copy of str
 *
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int n;
	char *copy;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	copy = malloc((sizeof(char) * n));
	if (copy == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}
