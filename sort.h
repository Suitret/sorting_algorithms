#ifndef _SORT_H
#define _SORT_H

#include <stddef.h> /* Because of 'size_t' */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void heapify(int *array, size_t size, int end, int i);
void swap(int *a, int *b);
void radix_sort(int *array, size_t size);
int getMax(int arr[], int n);
void countSort(int arr[], size_t n, int exp);
void bitonic_sort(int *array, size_t size);
void compAndSwap(int a[], int i, int j, int dir, int size);
void bitonicMerge(int a[], int low, int cnt, int dir, int size);
void bitonicSort(int a[], int low, int cnt, int dir, int size);
void quick_sort_hoare(int *array, size_t size);
void quick_sort_recursive_hoare(int *array, int low, int high, size_t size);
int hoare_partition(int *array, int low, int high, size_t size);
void swap_elements(int *array, int idx1, int idx2);
void merge(int *arr, int *tempArray, int lowerIndex, int middleIndex,
	   int upperIndex);
void mergeSrt(int *arr, int *tempArray, int lowerIndex, int upperIndex);
void merge_sort(int *arr, size_t size);
void swap_and_print(listint_t *tmp, listint_t **list, listint_t *ptr);
void intermediate_value_for_sorting_here(int *a, int beg, int end);
int partition(int a[], int beg, int end);

#endif /* _SORT_H */
