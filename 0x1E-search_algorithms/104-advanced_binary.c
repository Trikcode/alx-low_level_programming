#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: array to print
 * @size: size of array
 *
 * return: void
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}

/**
 * advanced_binary - searches for the first occurence of a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where first occurence of value is located, or -1 on failure
 */
int advanced_binary(int *array, size_t size, int value)
{
	int val, r = -1;
	size_t mid;

	if (array != NULL && size > 0)
	{
		print_array(array, size);
		mid = (size - 1) / 2;
		val = array[mid];
		if (val < value)
		{
			r = advanced_binary(array + mid + 1, size - (mid + 1), value);
			if (r >= 0)
				r += mid + 1;
		}
		else if (val > value)
			r = advanced_binary(array, mid + 1, value);
		else if (mid == 0 || array[mid - 1] < val)
			r = mid;
		else
			r = advanced_binary(array, mid + 1, value);
	}
	return (r);
}
