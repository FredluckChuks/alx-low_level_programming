#include "main.h"
/**
 * main: Entry point
 * Description: print_alphabet_x10
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	i = 1;
	while (i <= 10)
	{
		char letter;

		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
