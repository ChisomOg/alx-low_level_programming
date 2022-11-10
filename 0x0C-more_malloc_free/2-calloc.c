#include "main.h"

/**
 * _calloc - allocates memory using malloc
 *
 * @nmemb: number if elements
 * @size: size of memory to be allocated
 *
 * Return: pointer to the address
 */
void *_calloc(unsigned int nmemb, unsigned int size int)
{
	char *block;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (j = 0; j < (nmemb * size); j++)
			block[j] = 0;
		return (block);
	}
	else
		return (NULL);
}
