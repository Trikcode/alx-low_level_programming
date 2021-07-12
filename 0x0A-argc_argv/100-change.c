#include <stdio.h>
#include <stdlib.h>
/**
 *main-prints the minimum number of coins
 *to make change for an amount of money.
 *@argc:number of commandline arguments.
 *@argv:pointer to an array of commmand line arguments.
 *Return:0-success, non-zero-fail.
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, leastcents = 0, money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			leastcents += money / cents[i];
			money = money % cents[i];
			if (money % cents[i] == 0)
			{
				break;
			}
		}
	}
	printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
