#include <unistd.h>

/**
 * main - Entry point
 *
 * description: program that print without using printf or puts
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *my_words = "and that piece of art is useful\" - Dor Kopar, 2015-10-19\n";

	write(2, my_words, 58);

	return (1);
}
