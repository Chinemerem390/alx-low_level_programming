#include <stdio.h>
/**
 * main - print all alphabets except q and e
 *
 * Description: Use only printchar
 * Return: return (0)
 */
int main (void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
