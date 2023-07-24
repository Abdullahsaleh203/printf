#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
typedef struct format_print
{
	char c;
	int (*fn)(va_list, char[], int, int, int, int);
} format_print_t;

int _printf(const char *format, ...);
int format_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/****************** FUNCTIONS ******************/

int _putchar(char c);

/* Funtions to print chars and strings */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

#endif /* MAIN_H */

