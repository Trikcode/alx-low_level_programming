
Emmastro
/
alx-low_level_programming
 0 stars  3 forks
Code
Issues
Pull requests
Actions
Projects
More
alx-low_level_programming/0x04-more_functions_nested_loops/7-print_diagonal.c
@Emmastro
Emmastro Submit
 History
 1 contributor
30 lines (24 sloc)  338 Bytes
#include "holberton.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{

	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			_putchar(' ');
			ii++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
