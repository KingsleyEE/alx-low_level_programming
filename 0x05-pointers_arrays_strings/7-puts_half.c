#include "main.h"
/**
 * put_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void put_half(char *str)
{
	int i;
	int length = 0;

	for (i = 0 ; str[a] != '\0'; a++)
		length++;
	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (length % 2 != 0)
	{
		for (i = (length - 1) / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
	}
}
