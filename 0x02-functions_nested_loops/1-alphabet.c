#include "main.h"

/**
 * prints the alphabet, in lowercase, followed by a new line
 *
 * return: 0 (Success)
 */

void print_alphabet(void)
{
	int j;
	for(j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
