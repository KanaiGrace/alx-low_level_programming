#include <stdio.h>

/**
 * main - outputs size of data types
 *
 * Return: 0
 */
int main(void)
{
printf("Size of char: %zu\nbyte(s)", sizeof(char));
printf("Size of int: %zu\nbyte(s)", sizeof(int));
printf("Size of long int: %zu\nbyte(s)", sizeof(long int));
printf("Size of long long int: %zu\nbyte(s)", sizeof(long long int));
printf("Size of float: %zu\nbyte(s)", sizeof(float));
return (0);
}

