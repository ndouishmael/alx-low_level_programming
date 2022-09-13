#include "puchar.h"

/**
 * main - prints _Puchar
 *
 * Description: Prints _Puchar
 *
 * Return: 0 (Success)
 */

int main (void)
{
	char text [10] = "_puchar";
	int i = 0;
	
	for (i = 0; i<9; i++)
	{  
		_puchar(text[i]);
	}
	_puchar('\n');

	return (0);
}

