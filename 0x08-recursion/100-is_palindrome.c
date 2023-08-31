#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to calculate the length of.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _checke - Recursively checks if a string is a palindrome.
 * @s: The string to check.
 * @i: The left index.
 * @j: The right index.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int	_checke(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (_checke(s, i + 1, j - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int	is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (_checke(s, 0, len - 1));
}
