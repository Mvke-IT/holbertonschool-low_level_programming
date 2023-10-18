#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print single base 10 numbers.
 * Return: base 10 single numbers.
 */
int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return 0;
}
