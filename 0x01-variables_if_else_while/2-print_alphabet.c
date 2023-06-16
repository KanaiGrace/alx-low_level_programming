#include <stdio.h>

/**
 * main - prints out the alphabet
 *
 * Return: 0
 */
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar ('\n');
return (0);
}
