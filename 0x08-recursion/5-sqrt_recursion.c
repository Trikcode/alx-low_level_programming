#include "holberton.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	int sq = 2;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (square(n, sq));
}



/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{

if (val * val == n)
	return (val);
else if (val * val < n)
	return  (square(n, val + 1));
else
	return (-1);

}

