#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry to te program
 *
 * Description: program that count character
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch, comma_count = 0, stop_count = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == ',')
			comma_count++;
		if (ch == '.')
			stop_count++;
	}

	printf("%d commas, %d stops\n", comma_count, stop_count);
	return (0);
}
