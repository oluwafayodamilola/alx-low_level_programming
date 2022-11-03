#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings.
 * The returned pointer should point to a newly allocated space in
 * memory which contains the contents of s1, followed by the contents
 * of s2, and null terminated.
 *
 * @s1: string to concatenate
 * @s2: 2nd string to concatenate
 *
 * Return: str_concat
 */
char *str_concat(char *s1, char *s2)
{
	int i, n, k, l, plus;
	char *conca;

	i = 0, n = 0, k = 0, l = 0;

	if (s1 == NULL)
		return (" ");
	if (s2 == NULL)
		return (" ");
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[n] != '\0')
	{
		n++;
	}
	plus = i + n;
	plus += 1;
	conca = malloc(sizeof(char) * (plus));
	if (conca == NULL)
		return (NULL);
	while (s1[k] != '\0')
	{
		conca[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0')
	{
		conca[k] = s2[l];
		k++;
		l++;
	}
	conca[k] = '\0';
	return (conca);
}
