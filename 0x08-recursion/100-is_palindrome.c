#include "main.h"

/**
 * strlen_recursion - This function finds the length of a string
 * @s: The string to evaluate
 * Return: The length of the string s
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + strlen_recursion(s));
}

/**
 * helper - This function evaluates a string
 * @s: The string to evaluate
 * @len: The length of the string
 * Return: 1 if s is a palindrom, otherwise 0
 */

int helper(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		return (helper(s + 1, len - 2));
	else
		return (0);
}

/**
 * is_palindrome - This function evaluates whether a string is a palindrome
 * @s: The string to evaluate
 * Return: 1 if s is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen_recursion(s);

	if (len <= 1)
		return (1);

	return (helper(s, len));
}
