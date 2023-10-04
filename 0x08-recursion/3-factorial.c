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
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

