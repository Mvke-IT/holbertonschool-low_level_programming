#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Print all the letters of the alphabet except for the letters q and e.
 * Return: to 0
 */
int main(void)
{
	char low, e, q;
	e = 'e';
	q = 'q';
	low = 'a';

	while (low <= 'z')
	{
		if (low != e && low != q)
			putchar(low);
	}
	low++;
}

return 0;
}

