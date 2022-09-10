#include <stdio.h>
/**
 * main - Print all base 10 numbers from 0
 *
 * Description: Must be single digits
 * Return: return (0)
 */
int main(void)
{
int n
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return(0);
}
