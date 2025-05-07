#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char choice = 'a';

	while (choice <= 'z')
	{
		printf("The character is %c and the value is : %d\n", choice, choice);
		choice++;
	}
	printf("End of iteration\n");

	return (0);
}
