#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator:string to be printed
 * @n:counter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int number;
va_list my_num;
va_start(my_num, n);
for (i = 0; i < n; i++)
{
number = va_arg(my_num, int);
printf("%d", number);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(my_num);
}
