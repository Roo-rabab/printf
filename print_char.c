#include "main.h"

/**
 * print_char - prints a character
 * @args: list of arguments
 *
 * Return: number of characters printed
 * team work by Taha Eddiani & Omayma Zgani
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
