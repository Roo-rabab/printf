#include "main.h"
/**
 * uint_to_str - function converts unsigned int
 * @str: character
 * @base: unsigned int
 * @num: unsigned int
 * Return: return unsigned int
 */
unsigned int uint_to_str(unsigned int num, char *str, unsigned int base)
{
const char *digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
unsigned int length = 0, n = num, i;
do {
++length;
n /= base;
} while (n != 0);
if (str == NULL)
{
return (length);
}
if (num == 0)
{
str[0] = '0';
str[1] = '\0';
return (1);
}
for (i = length; i > 0; --i)
{
str[i - 1] = digits[num % base];
num /= base;
}
str[length] = '\0';
return (length);
}

/**
 * print_u - handle the conversion u,o,x,X
 * @args: arguments
 * Return:return int
 */
int print_u(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char str[32];
unsigned int len, i = 0;
int count = 0;
len = uint_to_str(num, str, 10);
for (; i < len; i++)
{
_putchar(str[i]);
count++;
}
return (count);
}

/**
 * print_o - handle the conversion u,o,x,X
 * @args: arguments
 * Return:return int
 */
int print_o(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char str[32];
unsigned int len, i = 0;
int count = 0;
len = uint_to_str(num, str, 8);
for (; i < len; i++)
{
_putchar(str[i]);
count++;
}
return (count);
}

/**
 * print_x - handle the conversion u,o,x,X
 * @args: arguments
 * Return:return int
 */
int print_x(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char str[32];
unsigned int len, i = 0;
int count = 0;
len = uint_to_str(num, str, 16);
for (; i < len; i++)
{
_putchar(str[i]);
count++;
}
return (count);
}

/**
 * print_X - handle the conversion u,o,x,X
 * @args: arguments
 * Return:return int
 */
int print_X(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char str[32];
unsigned int len, i = 0;
int count = 0;
len = uint_to_str(num, str, 16);
for (i = 0; i < len; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}
for (; i < len; i++)
{
_putchar(str[i]);
count++;
}
return (count);
}
