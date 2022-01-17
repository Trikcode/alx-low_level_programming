#include "search_algos.h"
#include <math.h>

/**
  * jump_search - jump search
  * @array: pointer to first element in search array
  * @size: size of array
  * @value: value to find
  *
  * Return: index where found or -1
  */

int jump_search(int *array, size_t size, int value)
{
	int  i, jump;
	double root;

	if (array == NULL)
		return (-1);

	root = sqrt((double)size);
	jump = root;
	i = 0;

	while (array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i + jump] >= value || i + jump >= (int)size)
		{
			printf("Value found between indexes [%d] and [%d]\n", i, i + jump);
			break;
		}
		i = i + jump;
	}
	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
