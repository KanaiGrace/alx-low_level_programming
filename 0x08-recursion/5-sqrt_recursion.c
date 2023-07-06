#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: holds the number
 * @start: holds number
 * @end: holds number
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
int start = 1;
int end = n / 2;
int result = -1;
while (start <= end)
{
int mid = (start + end) / 2;
int square = mid * mid;
if (square == n)
{
return (mid);
}
else if (square > n)
{
end = mid - 1;
}
else
{
start = mid + 1;
result = mid;
}
}
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (result);
}


