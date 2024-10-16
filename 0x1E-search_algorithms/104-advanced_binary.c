#include "search_algos.h"

/**
 * recursive_binary - Function that actually runs the binary
 * search. This uses recursion as the instructions only allow
 * usage of 1 loop, and it must be for printing the entire
 * array being searched
 * @array: The passed in array
 * @value: The target value to be searched for
 * @begin: The beginning pointer from advanced_binary
 * @end: The ending pointer from advanced_binary
 * Return: The index of the target value, or -1 if not found
 */
int recursive_binary(int *array, int value, int begin, int end)
{

	int mid = 0, temp = begin;

	if (begin > end)
		return (-1);

	printf("Searching in array: ");
	while (temp <= end)
	{
		printf("%d", array[temp]);
		if (temp != end)
			printf(", ");
		temp++;
	}

	printf("\n");
	mid = (end + begin) / 2;

	if (array[mid] == value && array[mid - 1] != value)
		return (mid);
	else if (array[mid] < value)
		begin = mid + 1;
	else
		end = mid;

	return (recursive_binary(array, value, begin, end));
}

/**
 * advanced_binary - Function that performs binary search
 * to find the target value. Unlike regular binary_search,
 * advanced_binary returns the first index of the target
 * value, if there are multiple indexes where the target
 * value may appear
 * @array: The passed in array
 * @size: The size of the given array
 * @value: The target value to be searched for
 * Return: The index of the target value, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int begin = 0, end = (int)size - 1;

	if (array == NULL)
		return (-1);

	return (recursive_binary(array, value, begin, end));
}
