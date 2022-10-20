#include <main.h>
/**
 * main - prints _putchar
 *
Return: Always 0 (Success)
 */
int main(void)
{
	char var[] = "_putchar";
	int i;
	int lenVar = sizeof(var) / sizeof(var[0]);

	for (i = 0; i < lenVar - 1; i++)
	{
		_putchar(var[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
