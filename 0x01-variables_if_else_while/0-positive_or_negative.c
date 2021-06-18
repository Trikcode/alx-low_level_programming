#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *Description: is it positive or negative
 *  Return:(0)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive \n", n);
	else if (n == 0)
		printf("%d is zero \n", n);
	else if (n < 0)
		printf("%d is negative \n", n);
	return (0);
}
