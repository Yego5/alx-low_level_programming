#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @n: the character to be checked
 * Return: 1 if n is a letter, 0 otherwise
 */
int _isalpha(int n)
{
	return ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'));
}
