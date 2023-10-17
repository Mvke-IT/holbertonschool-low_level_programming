#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the last digit of the number
 * return to 0
 *
 */
int main(void)
{
	int n, lstd;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstd = n % 10;
	/* Print the last digit of n. */
	printf("Last digit of %d is %d\n", n, lstd);
	if (lstd > 5)
	{
		printf(" and is greater than 5\n");
	} else if (lstd == 0)
	{
		printf(" and is 0\n");
	} else if (lstd < 6 && lstd != 0) {
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
