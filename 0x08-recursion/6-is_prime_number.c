#include "main.h"

/**
 * is_prime_recursive - Helper function to check if an integer is prime.
 * @n: The input integer to check.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
    if (n <= 1)
        return (0); /* 0 and 1 are not prime numbers */

    if (divisor == 1)
        return (1); /* If the divisor reaches 1, n is prime */

    if (n % divisor == 0)
        return (0); /* n is divisible by divisor, not prime */

    return (is_prime_recursive(n, divisor - 1)); /* Check with the next divisor */
}

/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The input integer to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    return (is_prime_recursive(n, n / 2)); /* Start with the largest possible divisor */
}

