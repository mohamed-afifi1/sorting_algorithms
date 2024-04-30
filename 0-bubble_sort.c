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
if (size == 0 || array == NULL)
return;
int i, j = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
			int temp = array[j];

			    array[j] = array[j + 1];
			    array[j + 1] = temp;
			    print_array(array, size);
			}
		}
	}

}
