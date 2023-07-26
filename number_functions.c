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

/**
 * print_binary - Prints an unsigned number
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Numbers of char printed.
 */
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	unsigned int n, m, i, sum;
	unsigned int a[32];
	int count;

	(void)buffer;
	(void)flags;
	(void)width;
	(void)precision;
	(void)size;

	n = va_arg(types, unsigned int);
	m = 2147483648;
	a[0] = n / m;
	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n / m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			count++;
		}
	}
	return (count);
}
