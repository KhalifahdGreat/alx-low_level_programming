#include "search_algos.h"
/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (index = left; index < right; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = left + (right - left) / 2;
		if (array[index] == value)
			return (index);
		if (array[index] > value)
			right = index - 1;
		else
			left = index + 1;
	}

	return (-1);
}
