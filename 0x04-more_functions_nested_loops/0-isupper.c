#include "main.h"
/**
 * int _isupper - to check for uppercase letters
 *
 * return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
