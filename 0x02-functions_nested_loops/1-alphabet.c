#include "main.h"

/**
 * prints the alphabet, in lowercase, followed by a new line
 *
 * return: 0 (Success)
 */

void print_alphabet(void)
{
	int c;
	for(c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
