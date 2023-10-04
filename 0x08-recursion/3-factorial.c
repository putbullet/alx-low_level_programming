#include "main.h"

/**
 * factorial - Calculate the factorial of an integer.
 * @n: The input integer.
 *
 * Return: The factorial of n.
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (1 * (factorial(n - 1)));
	}
}

