#include "holberton.h"

/**
 * _pow_recursion - Search a string for any of a set of bytes.
 * @x: base
 * @y: exposant
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

unsigned long int _pow_recursion(int x, int y)
{

if (y < 0)
	return (-1);
else if (y == 1)
	return (x);
else if (y == 0)
	return (1);

return (x * _pow_recursion(x, y - 1));

}


/**
 * get_bit - gets bit on index `index`
 * @n: decimal number
 * @index: index of the bit
 * Return: the bit found
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; _pow_recursion(2, i) <= n; i++)
	;

	if (n == 0)
		i++;

	do {
		i--;
		if (i == index)
		{
			if (_pow_recursion(2, i) <= n)
				return (1);
			else
				return (0);
		}

		if (_pow_recursion(2, i) <= n)
			n -= _pow_recursion(2, i);

	} while (i != 0);

	return (-1);
}
