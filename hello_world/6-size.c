#include <stdio.h>
/**
 * main - starts the program
 * variables: c,i,li,lli and f are variables
 * printf: print a message followed by a expression
 * Return: turn 0 when finish
 */
#include <stdio.h>
/**
 *main - starts de program
 *variables: c,i,li,lli and f are variables
 *printf: print a massage followed by a expression
 *Return: Return 0 when finish
 */
int main(void)
{
    char c;
    int i;
    long int li;
    long long int lli;
    float f;

    printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
    printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
    printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
    printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
    printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
    return (0);
}
