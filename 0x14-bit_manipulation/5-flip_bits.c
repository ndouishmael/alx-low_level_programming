#include "main.h"

/**
 * print_bin - prints binary rep of @n
 *
 * @number: decimal value
 *
 * Return: nothing
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum;
	unsigned long int xor;

	sum = 0;
	xor = n ^ m;
	while (xor)
	{
		sum += xor & 1;
		xor = xor >> 1;
	}
	return (sum);
}
