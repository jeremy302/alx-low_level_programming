#include "holberton.h"

/**
 * _strlen - gets the length of s
 * @s: a string
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
	return (*s ? 1 + _strlen(s + 1) : 0);
}

/**
 * palindrome_check - checks if a string from s to s + len is a palindrome
 * @s: string to check
 * @len: length of s
 *
 * Return: 1 if s is a palindrome, else 0
 */
int palindrome_check(char *s, int len)
{
	return (len <= 1 || *s == s[len - 1] && palindrome_check(s + 1, len - 2));
}

/**
 * is_palindrome - checks if *s is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	return (palindrome_check(s, _strlen(s)));
}
