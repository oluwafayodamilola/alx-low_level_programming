#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the char
 * Return: array;
 *
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	i = 0;
	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == 0)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
