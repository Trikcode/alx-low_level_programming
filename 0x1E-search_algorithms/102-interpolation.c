#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 on failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l, m, r;

	if (array != NULL && size > 0)
	{
		l = 0;
		r = size - 1;
		while (array[l] != array[r])
		{
			m = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
			if (m < l || m > r)
			{
				printf("Value checked array[%lu] is out of range\n", m);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", m, array[m]);
			if (array[m] < value)
				l = m + 1;
			else if (array[m] > value)
				r = m - 1;
			else
				return (m);
		}
	}
	return (-1);
}
