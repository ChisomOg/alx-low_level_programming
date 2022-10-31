#include "main.h"

/** _memcpy - it copies n bytes from memory area to dest
 *
 * @dest: area where bytes are copied to
 * @src: area where bytes are copied from
 * @m: number of bytes to copy
 * Return: return a pointer to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
