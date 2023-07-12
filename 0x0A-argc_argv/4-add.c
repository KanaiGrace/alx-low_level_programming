#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main-adds numbers
 * @argc:counts number of arguments
 * @argv:pointer
 * Return:0
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;
int j;
if (argc == 1)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
break;
}
}
if (!isdigit(argv[i][0]))
{
continue;
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
