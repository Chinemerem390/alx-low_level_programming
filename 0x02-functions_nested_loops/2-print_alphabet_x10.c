#include "main.h"
/*
 * print_alphabet_x10 - functions to print abc 10 times
 *
 * Description : use putchar
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	char c, i;
	
	for (c = '0'; c <= '9'; c++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	}
		_putchar('\n');
}
