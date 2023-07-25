#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator:pointer
 * @n:counter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *str;
va_list my_string;
va_start(my_string, n);
for (i = 0; i < n; i++)
{
str = va_arg(my_string, char*);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(my_string);
}

