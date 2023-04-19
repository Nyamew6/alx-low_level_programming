#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * @array: the array
 * @size: the size of the array
 * @action: pointer to function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
