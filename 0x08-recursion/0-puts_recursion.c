#include "main.h"

/**
 * _puts_recursion - print a string.
 * @s: pointer to char
 * Return: No.
 */

void _puts_recursion(char *c)
{
	if (*c != '\0')
	{
		_putchar(*c);
		_puts_recursion(c + 1);
	}
	else
	{
	_putchar('\n');
	}
}
