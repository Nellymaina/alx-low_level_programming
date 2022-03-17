#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: input value to check.
 * Return: 1 if c is a digit
 */

int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
