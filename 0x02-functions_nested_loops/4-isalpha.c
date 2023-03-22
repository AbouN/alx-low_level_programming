#include "main.h"

/**
 *_isalpha - checks to see if character is a lowercase or uppercase
 *@c: character to check
 *Return: 1 if c a lowercase or uppercase
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
