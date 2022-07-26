#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - Entry point
 * @size: size of the array
 * @c: character
 *
 * Return: a pointer to the array, or NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)

{

	char *array;

	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);

}
