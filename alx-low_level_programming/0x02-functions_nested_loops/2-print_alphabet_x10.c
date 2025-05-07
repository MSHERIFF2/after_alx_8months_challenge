#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: alphabets
 */

void print_alphabet_x10(void)
{
	char my_alpha;
	int i = 0;

	for (i; i < 10; i++)
	{
		my_alpha = 'a';

		for (; my_alpha <= 'z'; my_alpha++)
		{
			_putchar(my_alpha);
		}
		_putchar('\n');
	}
}
