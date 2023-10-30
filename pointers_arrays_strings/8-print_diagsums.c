#include "main.h"
#include <stdio.h>

/**
   * print_diagsums - Print the sum of two diagonals of a square
   * @a: pointer
   * @size: array
   **/

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;
	int sum1 = 0;

	for (j = 0; j < (size * size); j += size + 1) {
		sum1 += a[j];
	}

	for (i = size - 1; i < (size * size) - 1; i += size - 1) {
		sum += a[i];
	}

	printf("%d, %d\n", sum1, sum);
}

int main(void) {
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(a) / sizeof(a[0]);

	print_diagsums(a, size);

	return (0);
}
