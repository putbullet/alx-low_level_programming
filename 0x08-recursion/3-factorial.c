#include "main.h"

/**
 * factorial - Calculate the factorial of an integer.
 * @n: The input integer.
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n = 0)
	{
		return (1);
	else
	{
		return (1 * (factorial(n - 1)));
	}
}

