#include "function_pointers.h"
#include <stdio.h>
/**
 * *int_dex - search an int to compare
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to function to compare the int
 * *Return: Return the index or -1 if it has an error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		int i;

		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
