#include <stdio.h>
/**
 * main - Print all basd 16 num
 *
 * Description: Must be in Lowercase
 * Return: return (0)
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
