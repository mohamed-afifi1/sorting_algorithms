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
* @size: the number of elements
*/
void _qsort(int *a, int low, int high)
{
	int pivot, ptr, i;
	int tmp;

	if (low < high)
	{
		pivot = high;
		ptr = low;
		for (i = low; i < high; i++)
		{
			if (a[i] < a[pivot])
			{
				if (i != ptr)
				{
					tmp = a[i];
					a[i] = a[ptr];
					a[ptr] = tmp;
					print_array(a, high + 1);
				}
				ptr++;
			}
		}
		if (ptr != pivot && a[ptr] != a[pivot])
		{
			tmp = a[ptr];
			a[ptr] = a[pivot];
			a[pivot] = tmp;
			print_array(a, high + 1);
		}
		_qsort(a, low, ptr - 1);
		_qsort(a, ptr + 1, high);
	}
}
