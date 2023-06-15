#include <stdio.h>

/**
 * main - outputs size of data types
 *
 * Return: 0
 */
int main(void)
{
printf("Size of char: %zu\n byte(s)", sizeof(char));
printf("Size of int: %zu\n byte(s)", sizeof(int));
printf("Size of long int: %zu\n byte(s)", sizeof(long int));
printf("Size of long long int: %zu\n byte(s)", sizeof(long long int));
printf("Size of float: %zu\n byte(s)", sizeof(float));
return (0);
}

