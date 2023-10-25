#include "main.h"
/**
 * puts_half-prints the second half of a string
 *
 * @str: string to print
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = i / 2;
	if (i % 2 == 1)
		j++;

	for ( ; j <= i ; )
	{
		_putchar(str[j]);
		j++;
	}

_putchar ('\n');
}
