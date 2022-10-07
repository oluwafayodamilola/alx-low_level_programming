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
	unsigned int i;
	char *array;
	
	i = 0;
	
	if (size == 0)
		return(NULL);
	array = malloc(sizeof(char) * size);


	while (i < size)
	{
		array[i] = c;
	}
	i++;
	return (array);
}	
