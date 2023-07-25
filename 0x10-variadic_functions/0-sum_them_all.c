#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums numbers
 * @n:holds numbers
 * Return:sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list my_nums;
va_start(my_nums, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum += va_arg(my_nums, int);
}
return (sum);
va_end(my_nums);
}
