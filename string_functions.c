#include "main.h"

/**
 * print_int - Print int
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int i = 0, j = 0, k = 0, n = 0, m = 0, l = 0;
	int num = va_arg(types, int);
	char *str = NULL;

	(void)flags;
	(void)width;
	(void)precision;
	(void)size;

	(num < 0) ? (num = -num, buffer[j++] = '-') : 0;
	(num == 0) ? (buffer[j++] = '0') : 0;

	n = num;
	while (n != 0)
		n /= 10, i++;

	str = malloc(i * sizeof(char));
	if (str == NULL)
		return (-1);

	n = num;
	while (n != 0)
	{
		m = n % 10;
		str[k++] = m + '0';
		n /= 10;
	}

	for (l = k - 1; l >= 0; l--)
	{
		buffer[j] = str[l];
		j++;
	}

	free(str);
	write(1, buffer, j);
	return (j);
}

