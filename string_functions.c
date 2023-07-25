#include "main.h"

/**
 * print_char - Prints a char
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_char(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
char c = va_arg(types, int);

(void)flags;
(void)width;
(void)precision;
(void)size;

buffer[0] = c;

write(1, buffer, 1);

return (1);
}

/**
 * print_string - Prints a string
 * @types: List a of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_string(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
char *str = va_arg(types, char *);
int i = 0, j = 0;
(void)flags;
(void)width;
(void)precision;
(void)size;

if (str == NULL)

str = "(null)";

while (str[i] != '\0')
{
buffer[j] = str[i];
i++;
j++;
}

write(1, buffer, j);

return (j);
}
/**
 * print_percent - Prints a percent sign
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_percent(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
(void)types;
(void)flags;
(void)width;
(void)precision;
(void)size;

buffer[0] = '%';

write(1, buffer, 1);

return (1);
}

