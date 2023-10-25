#include "main.h"
/**
 * puts_half-prints the second half of a string
 *
 * @str: string to print
 */

void puts_half(char *str)
{
	int i,j;

		i = 0;
		while (str[i] != '\0')
		{
			i++;
		}
		i--;
	{
		for (j=(i/2); j <= i; j++)
			_putchar(str[j]);
	}
	_putchar ('\n');
}
