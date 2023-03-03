#include "main.h"
/**
 * cap_string - capitalizes all of a string.
 * @str: the string to be capitalized
 *
 * Return: A pointer to the change string.
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (ster[index - 1] == ' ' ||
				ster[index - 1] == '\t' ||
				ster[index - 1] == '\n' ||
				ster[index - 1] == ',' ||
				ster[index - 1] == ';' ||
				ster[index - 1] == '.' ||
				ster[index - 1] == '!' ||
				ster[index - 1] == '?' ||
				ster[index - 1] == '"' ||
				ster[index - 1] == '(' ||
				ster[index - 1] == ')' ||
				ster[index - 1] == '{' ||
				ster[index - 1] == '}' ||
				index == 0)
			str[index] -= 32;

		index++;
	}
	return (str);
}
