#include <stdio.h>

/**
 * main - prints alphabet reverse
 *
 * Return: 0
 */
int main(void)
{
char rev;

for (rev = 'z'; rev >= 'a'; rev++)
{
	putchar(rev);
}
putchar('\n');
return (0);
}
