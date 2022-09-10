#include <stdio.h>
/**
 * main - print alphabets in reverse
 *
 * Description - Use putchar
 * Return: return (0)
 */
int main(void)
{
char b;
for (b = 'z'; b <= 'a'; b--)
{
	putchar(b);
}
putchar('\n');
return (0);
}
