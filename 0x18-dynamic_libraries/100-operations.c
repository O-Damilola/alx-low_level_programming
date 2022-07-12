#include <stdio.h>

/**
 * main - Add two numbers together.
 *
 * Return: Always 0 (Success)
 */
int add(int a, int b)
{
    printf("%d", (a + b));
    return(0);
}

/**
 * main - find the difference of two numbers.
 *
 * Return: Always 0 (Success)
 */
int sub(int a, int b)
{
    printf("%d", (a - b));
    return(0);
}

/**
 * main - find the product of two numbers.
 *
 * Return: Always 0 (Success)
 */
int mul(int a, int b)
{
    printf("%d", (a * b));
    return(0);
}

/**
 * main - Divide two numbers.
 *
 * Return: Always 0 (Success)
 */
int div(int a, int b )
{
    printf("%d", (a/b));
    return(0);
}

/**
 * main - find the modulus of two numbers.
 *
 * Return: Always 0 (Success)
 */
int mod(int a, int b)
{
    printf("%d", a % b);
    return(0);
}
