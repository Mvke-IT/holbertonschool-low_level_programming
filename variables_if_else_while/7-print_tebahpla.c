#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print alphabets in reverse.
 * Return: alphabets in reverse
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return 0;
}
