#include <stdlib.h>
#include "main.h"

/**
 * main - function that creates an array of chars, and initializes it with a specific char
 * @size: the size of the array
 * @c: the char
 *
 */

char *create_array(unsigned int size, char c)
{

	char *array;
	
	if (size == 0)
		return(NULL);
	array = malloc(sizeof(char) * size);

	int i;

	while (i < size)
	{
		array[i] = c;
	}
	i++;
	return (array);
}	
