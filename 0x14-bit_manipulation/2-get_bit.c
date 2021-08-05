#include "holberton.h"

/**
 * get_bit - gets bit on index `index`
 * @n: decimal number
 * @index: index of the bit
 * Return: the bit found
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * BYTE_LENGHT)
		return (-1);

	return ((n >> index) & 1);
}
