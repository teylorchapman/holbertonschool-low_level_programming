#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
int left = 0;
int right = (int)size - 1;
int mid;
int i;

while (left <= right)
{
printf("Searching in array: ");
for (i = left; i < right; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);

mid = (left + right) / 2;

if (array[mid] < value)
left = mid + 1;
else if (array[mid] > value)
right = mid - 1;
else
return (mid);
}
return (-1);
}
