#include <stdio.h>

/**
 * main - prints alphabet except q,e
 *
 * Return: 0
 */
int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'q' && alpha != 'e')
{
putchar(alpha);
}
}
putchar('\n');
return (0);
}

