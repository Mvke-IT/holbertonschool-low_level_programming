#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print alphabet
 * Return: to 0
 */
int main(void)
{
	char c = 'a', d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar ('\n');
	return (0);
}
