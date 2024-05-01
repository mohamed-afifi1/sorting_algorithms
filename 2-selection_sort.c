#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
* selection_sort - sort a array of integers
* @array: array of integers
* @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, m;
	int t;

	for (i = 0; i < size - 1; i++)
	{
		m = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[m])
			{
				m = j;
			}

		}
		if (i != m)
		{
			t = array[i];
			array[i] = array[m];
			array[m] = t;
			print_array(array, size);
		}
}
}
