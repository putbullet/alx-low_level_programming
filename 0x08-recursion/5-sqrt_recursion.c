#include "main.h"

int _sqrt_recursive_helper(int n, int m);

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The input integer.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Error: Negative input */

	if (n == 0 || n == 1)
		return (n); /* Base cases: The square root of 0 or 1 is the number itself */

	return (_sqrt_recursive_helper(n, 1)); /* Call a helper function */
}

/**
 * _sqrt_recursive_helper - Helper function to calculate the square root.
 * @n: The input integer.
 * @m: The current guess for the square root.
 *
 * Return: The natural square root of n.
 */
int _sqrt_recursive_helper(int n, int m)
{
	if (m * m == n)
		return (m); /* Found the square root */

	if (m * m > n)
		return (-1); /* n does not have a natural square root */

	return (_sqrt_recursive_helper(n, m + 1)); /* Increment the guess */
}

