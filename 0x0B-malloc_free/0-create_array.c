#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: Character to insert
 * Returm: Null if size is zero
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array = NULL)
		return (NULL);
	for (index = 0; idex < size; index++)
		array[index] = c;

	return (array);
}
