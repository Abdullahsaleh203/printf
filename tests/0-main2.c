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
    char *str;
    int i = 0;

    str = (char *)malloc(10000);
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (i = 0; i < 9999; i++) {
        str[i] = 'A';
    }
    str[9999] = '\0';

    _printf("man gcc:\n%s", str);
    printf("\n");
    printf("man gcc:\n%s", str);

    free(str);
    return (0);
}
