#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
* quick_sort - sort a array of integers
* @array: array of integers
* @size: number of elements
*/
void quick_sort(int *array, size_t size)
{
	_qsort(array, 0, size - 1);
}

/**
* _qsort - quick sort function
* @a: array of integers
* @low: the lowest element
* @high: the highest element
*/
void _qsort(int *a, int low, int high)
{
	int pivot, pointer, i;
	int tmp;

	if (low < high)
	{
		pivot = high;
		pointer = low;
		for (i = low; i < high; i++)
		{
			if (a[i] < a[pivot])
			{
				if (i != pointer)
				{
					tmp = a[i];
					a[i] = a[pointer];
					a[pointer] = tmp;
					print_array(a, high + 1);
				}
				pointer++;
			}
		}
		if (pointer != pivot && a[pointer] != a[pivot])
		{
			tmp = a[pointer];
			a[pointer] = a[pivot];
			a[pivot] = tmp;
			print_array(a, high + 1);
		}
		_qsort(a, low, pointer - 1);
		_qsort(a, pointer + 1, high);
	}
}
