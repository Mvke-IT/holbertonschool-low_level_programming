#include "main.h"
/**
 * print_alphabet_x10 - print alphabet times 10.
 */

void print_alphabet_x10(void)
{
	int num = 0;
	char letter;

	while (num < 10)
	{
		for (letter = 'a' ; letter <= 'z' ; letter++)
			_putchar(letter);

		_putchar('\n');
		num++;
	}
}
