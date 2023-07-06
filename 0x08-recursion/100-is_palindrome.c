#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * is_palindrome_recursive - checks string
 * @s: points to string
 * @left: holds left
 * @right: holds right
 * Return: 1 or 0
 */
int is_palindrome_recursive(char *s, int left, int right)
{
char leftChar = tolower(s[left]);
char rightChar = tolower(s[right]);
if (left >= right)
return (1);
if (!isalnum(s[left]))
return (is_palindrome_recursive(s, left + 1, right));
if (!isalnum(s[right]))
return (is_palindrome_recursive(s, left, right - 1));
if (leftChar != rightChar)
return (0);
return (is_palindrome_recursive(s, left + 1, right - 1));
}
/**
 * is_palindrome - calls function
 * @s: points to string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
int left = 0;
int right = strlen(s) - 1;
return (is_palindrome_recursive(s, left, right));
}
