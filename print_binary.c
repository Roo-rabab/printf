#include "main.h"
/**
 * print_binary - convert unsigned int to binary
 * @args: agruments
 * Return: number of characters
 */
int print_binary(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int count = 0;
if (num <= 1)
{
_putchar(num + '0');
return (1);
}
else
{
count += print_binary_helper(num >> 1);
count += _putchar((num & 1) + '0');
}
return (count);
}
/**
 * print_binary_helper - help function
 * @num: unsigned int
 * Return: number
 */
int print_binary_helper(unsigned int num)
{
int count = 0;
if (num <= 1)
{
_putchar(num + '0');
return (1);
}
else
{
count += print_binary_helper(num >> 1);
count += _putchar((num & 1) + '0');
}
return (count);
}
