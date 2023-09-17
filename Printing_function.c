#include "shell.h"

/**
 * _putchar - the function name.
 * @c: the input.
 * Return: the result.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - the function name.
 * @str: the input.
 * Return: the result.
 */

int _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
