#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a charater
 *
 * @c: The character to write
 * Return: 1 on success or -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
