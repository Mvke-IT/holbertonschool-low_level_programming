#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Function prints a string of lowercase letters, followed by a new line character.
 * Return: The program prints out the alphabet in lowercase, followed by a new line.
 */
int main(void)
{
	char c;
	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		return (0);
	}
}
