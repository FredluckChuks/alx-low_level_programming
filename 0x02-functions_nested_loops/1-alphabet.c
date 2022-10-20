#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: Prints lowercase alphabet
 * Return: Always 0 sucess
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
