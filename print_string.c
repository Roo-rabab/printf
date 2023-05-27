#include "main.h"

/**
 * print_string - prints a string
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	int i;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
