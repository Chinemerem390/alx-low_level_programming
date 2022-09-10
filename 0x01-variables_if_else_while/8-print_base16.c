#include <stdio.h>
/**
 * main - Print all basd 16 num
 *
 * Description: Must be in Lowercase
 * Return: return (0)
 */
int main(void)
{
char n;
for (n = '0'; n <= '10'; n++)
{
	putchar(n);
}
for (n = 'a'; n < 'g'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
