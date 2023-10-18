#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print alphabets in reverse.
 * Return: alphabets in reverse
 */
int main(void)
{

	char start = 'z';
	char end = 'a';

	putchar(start);
	while (start > end)
{
		start--;
		putchar(start);
	}

	putchar('\n');

	return 0;
}
