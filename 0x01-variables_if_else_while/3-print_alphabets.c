#include<stdio.h>
/**
 * main - a prog that prints in upper and lowercase.
 *
 * Description: You must only use putchar
 * Return: return (0)
 */
int main(void)
{
char ch;
for (ch = "a"; ch <= "z"; ch++)
{
	putchar(ch);
}
for (ch = "A"; ch <= "Z"; ch++)
{
	putchar(ch);
}
putchar('/n');
return (0);
}
