#include "search_algos.h"

/**
 * Linear_search - searches for a valuw in an array of integers
 * using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Retuen: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++){
		printf("Value checked array[%u] = [%d]\n", 1, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
