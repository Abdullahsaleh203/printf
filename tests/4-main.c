#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int i = 0;
    int len;

    char *s = malloc(1020);
    for (i = 0; i < 1019; i++) {
        s[i] = 'A';
    }
    s[1019] = '\0';

    len = _printf("%s%b\n", s, INT_MAX);

    printf("\nLength: %d\n", len);

    free(s);
    return 0;
}
