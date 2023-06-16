#include <stdio.h>

/**
 * main - prints out alphabet in uppercase
 *
 * Return: 0
 */
int main(void)
{
char alpha;

char alphaup;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	putchar(alpha);
}
for (alphaup = 'A'; alphaup <= 'Z'; alphaup++)
{
	putchar(alphaup);
}
putchar('\n');
return (0);
}
