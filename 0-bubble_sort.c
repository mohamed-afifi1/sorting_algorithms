#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
* bubble_sort - function that sorts an array
* @array: The array to be sorted.
* @size: The size of the array.
*/
void bubble_sort(int *array, size_t size)
{
	size_t first;
	size_t second;

if (size == 0)
return;
if (array == NULL)
return;
	for (first = 0; first < size - 1; first++)
	{
		for (second = 0; second < size - first - 1; second++)
		{
			if (array[second] > array[second + 1])
			{
				int t = array[second];

				array[second] = array[second + 1];
				array[second + 1] = t;
				print_array(array, size);
			}
		}
	}
}
