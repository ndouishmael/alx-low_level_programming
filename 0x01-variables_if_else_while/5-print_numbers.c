#include <stdio.h>

/**
 *  main - print single digit numbers
 *
 *  Description: print single digit numbers
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);

	putchar('\n');

	return (0);
}
