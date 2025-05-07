#include "main.h"

/**
 * print_alphabet - program that prints the lowercase alphabets
 *
 * Return:void 
 */

void print_alphabet(void)
{
	char my_alpha = 'a';

	while (my_alpha <= 'z')
	{
		putchar(my_alpha);
		my_alpha++;
	}

	putchar('\n');
}
