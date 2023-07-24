#include <stdio.h>
#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add-returms sum of a and b
 * op_sub-return difference
 * @a:holds value
 * @b:holds v value
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub-return difference
 * @a:holds value
 * @b:holds v value
 * Return: sum of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul-return difference
 * @a:holds value
 * @b:holds v value
 * Return: sum of a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div-return difference
 * @a:holds value
 * @b:holds v value
 * Return: sum of a and b
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod-return difference
 * @a:holds value
 * @b:holds v value
 * Return: sum of a and b
 */
int op_mod(int a, int b)
{
return (a % b);
}


