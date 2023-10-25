#include "main.h"
#include <string.h>
/**
 * puts2 - Prints every other character
 *@str: is the string that's going to be modified.
 */
void puts2(char *str)
{
	int i, m;

	for (i = 0; str[i] != '\0'; i++)
		;
	for(m = 0; m < i; m++)
	{
		if ((m % 2)==0)
		{
			_putchar(str[m]);
		}
		else
		{
			continue;
		}
	}
	_putchar ('\n');
}
