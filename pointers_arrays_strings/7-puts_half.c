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
	if (j % 2 == 1)
		j++;

	for ( ; j <= i ; j++)
		_putchar(str[j]);

_putchar ('\n');
}
