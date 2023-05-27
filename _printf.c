#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: number of character printed
 * team work by Taha Eddiani & Omayma Zgani
 */
int _printf(const char *format, ...)
{
	int i, count = 0, (*f)(va_list);
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			while (format[i] == ' ')
				i++;
			f = get_print_function(format[i]);
			if (f == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
			else
			{
				count += f(args);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(args);
	return (count);
}
