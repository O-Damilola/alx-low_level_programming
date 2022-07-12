#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/**
 * main - Add two numbers together.
 *
 * Return: Always 0 (Success)
 */
int add(int x, int y)
{
    printf("%d", (x + y));
    return(0);
}

/**
 * main - find the difference of two numbers.
 *
 * Return: Always 0 (Success)
 */
int sub(int x, int y)
{
    printf("%d", (x - y));
    return(0);
}

/**
 * main - find the product of two numbers.
 *
 * Return: Always 0 (Success)
 */
int mul(int x, int y)
{
    printf("%d", (x * y));
    return(0);
}

/**
 * main - Divide two numbers.
 *
 * Return: Always 0 (Success)
 */
int division(int x, int y )
{
    printf("%d", (x/y));
    return(0);
}

/**
 * main - find the modulus of two numbers.
 *
 * Return: Always 0 (Success)
 */
int mod(int x, int y)
{
    printf("%d", x % y);
    return(0);
}
