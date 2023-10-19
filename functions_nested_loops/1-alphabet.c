#include "main.h"
/**
 * print_alphabet - print the alphabet in lower case
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;

	}
	_putchar ('\n');
}
