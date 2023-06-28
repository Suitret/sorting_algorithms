#include <stdio.h>
#include "sort.h"

/**
 * quick_sort_hoare - Sorts an array of integers in ascending
 * order using Quick sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive_hoare(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive_hoare - Recursively sorts an array
 * of integers using Quick sort algorithm
 * with Hoare partition scheme
 * @array: The array to be sorted
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 * @size: The size of the original array (for printing)
 */
void quick_sort_recursive_hoare(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot = hoare_partition(array, low, high, size);

		quick_sort_recursive_hoare(array, low, pivot - 1, size);
		quick_sort_recursive_hoare(array, pivot, high, size);
	}
}

/**
 * hoare_partition - Partitions the array using Hoare partition scheme
 * @array: The array to be sorted
 * @low: The starting index of the partition
 * @high: The ending index of the partition
 * @size: The size of the original array (for printing)
 *
 * Return: The index of the pivot element
 */
int hoare_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j = high + 1;

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);

		do {
			j--;
		} while (array[j] > pivot);

		if (i >= j)
			return (j);

		swap_elements(array, i, j);
		print_array(array, size);
	}
}

/**
 * swap_elements - Swaps two elements in an array
 * @array: The array containing the elements
 * @idx1: The index of the first element
 * @idx2: The index of the second element
 */
void swap_elements(int *array, int idx1, int idx2)
{
	int temp = array[idx1];

	array[idx1] = array[idx2];
	array[idx2] = temp;
}
