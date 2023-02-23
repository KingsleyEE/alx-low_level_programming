#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
