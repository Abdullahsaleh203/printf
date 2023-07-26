#include "main.h"

/**
 * format_print - Prints an argument based on its type
 * @fmt: Formatted string in which to print the arguments.
 * @list: List of arguments to be printed.
 * @ind: ind.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: 1 or 2;
 */
int format_print(const char *fmt, int *ind, va_list list, char buffer[],
	int flags, int width, int precision, int size)
{
	int i, len = 0, printed_chars = -1;
	format_print_t format_types[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'\0', NULL}
	};

	for (i = 0; format_types[i].c != '\0'; i++)
	{
		if (format_types[i].c == fmt[*ind])
			return (format_types[i].fn(list, buffer, flags, width, precision, size));
	}
	if (format_types[i].c == '\0')
	{
		if (fmt[*ind] == '\0')
			return (-1);
		len += write(1, "%%", 1);
		if (fmt[*ind - 1] == ' ')
			len += write(1, " ", 1);
		len += write(1, &fmt[*ind], 1);
		return (len);
	}
	return (printed_chars);
}
