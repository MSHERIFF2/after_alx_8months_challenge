#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program to perform math with character
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		printf("Value %d char %c\n", c, c);
		c++;
	}
	printf("%c\n", 78);
	return (0);
}
