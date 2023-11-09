#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 * @num: amount of elementes
 * @size: the data type
 * Return: the value of the pointer
 */
void *_calloc(unsigned int num, unsigned int size)
{
	unsigned int i, *n;
	char *ch;

	if (num == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	if (size == sizeof(char))
	{
		ch = malloc(num * size);
		if (ch == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < num; i++)
		{
			ch[i] = '0';
		}
		return (ch);
	}
	else
	{

	n = malloc(num * size);

	if (n == NULL)
	{
		return (NULL);
	}
		for (i = 0; i < num; i++)
		{
			n[i] = 0;
		}
	}
	return (n);
}
