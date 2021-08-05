#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number whose bit to get
 * @index: the index at which to return the value
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		n >>= 1;
	if (i > ((sizeof(unsigned long int) * 8) - 1))
		return (-1);
	return (n & 1);
}
