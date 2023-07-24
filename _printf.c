#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	va_list list;
	char buffer[1024];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			printed = format_print(format, &i, list, buffer, 0, 0, 0, 0);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}

	va_end(list);

	return (printed_chars);

}
