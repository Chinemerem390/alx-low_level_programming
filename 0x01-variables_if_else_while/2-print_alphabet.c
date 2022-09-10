#include <stdio.h>
/**
 * main - Prints a to z
 *
 * Description: Using putchar print A to Z
 * Return: return (0)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar (ch);
}
putchar('\n');
return (0);
}
