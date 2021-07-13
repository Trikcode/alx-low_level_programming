#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid-returns pointer to a 2d array of pointers.
 *@width:array width.
 *@height:array height.
 *
 *Return:pointer to a 2d array.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr = (int **)malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}
	if ((width | height) <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
	}
		/* Note that arr[i][j] is same as *(*(arr+i)+j)*/
		for (i = 0; i <  height; i++)
		{
			for (j = 0; j < width; j++)
			{
				arr[i][j] = 0;  /* OR *(*(arr+i)+j) =  0;*/
			}
		}
		if (arr == NULL)
		{
			return (NULL);
		}
	return (arr);
}
