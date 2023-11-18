#include "3-calc.h"
/**
 *op_add - sum a and b
 *@a: first number
 *@b: second number
 *Return: Return the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - difference of a and b
 *@a: first number
 *@b: second number
 *Return: Return the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - product of a and b
 *@a: first number
 *@b: second number
 *Return: return the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - division of a by b
 *@a: first number
 *@b: second number
 *Return: Return the result of the devision of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - remainder of the division of a by b
 *@a: first number
 *@b: second number
 *Return: Return the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
