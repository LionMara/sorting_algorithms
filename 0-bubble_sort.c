#include "sort.h"

/**
 * bubble_sort - an implementation of the bubble sort algo
 *
 * @array: array to be sorted
 * @size: size of array
 * return: returns nothinh
 */
void bubble_sort(int *array, size_t size)
{
	int temp, flag;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
		print_array(array, size);

	}
}
