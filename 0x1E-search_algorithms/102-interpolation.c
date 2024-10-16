#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t index, low, reach;

	if (array == NULL)
		return (-1);

	for (low = 0, reach = size - 1; reach >= low;)
	{
		index = low + (((double)(reach - low) / (array[reach] - array[low])) * (value - array[low]));
		if (index < size)
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", index);
			break;
		}

		if (array[index] == value)
			return (index);
		if (array[index] > value)
			reach = index - 1;
		else
			low = index + 1;
	}

	return (-1);
}
