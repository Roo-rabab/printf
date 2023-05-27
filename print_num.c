#include "main.h"

/**
 * print_num_helper - a helper function for print_num
 *
 * @list: parameter
 * Return: return int
 */
int print_num_helper(va_list list)
{
int num_length;
num_length = print_num(list);
return (num_length);
}

/**
 * print_num - print number
 * @args: integer printed
 * Return: number
 */
int print_num(va_list args)
{
int n;
int div;
int len;
unsigned int num;
n = va_arg(args, int);
div = 1;
len = 0;
if (n < 0)
{
len += _putchar('-');
num = n * -1;
}
else
num = n;
for (; num / div > 9; )
div *= 10;
for (; div != 0; )
{
len += _putchar('0' + num / div);
num %= div;
div /= 10;
}
return (len);
}
