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
    _printf("Let's print a simple sentence.\n");
    printf("Let's print a simple sentence.\n");

    _printf("%c", 'S');
    printf("%c", 'S');

    _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    printf("A char inside a sentence: %c. Did it work?\n", 'F');

    _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
    printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);

    _printf("%s", "This sentence is retrieved from va_args!\n");
    printf("%s", "This sentence is retrieved from va_args!\n");

    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");

    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);

    _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    
    _printf("%%");
    printf("%%");

    _printf("Should print a single percent sign: %%\n");
    printf("Should print a single percent sign: %%\n");

    _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');

    _printf("css%ccs%scscscs", 'T', "Test");
    printf("css%ccs%scscscs", 'T', "Test");

    _printf(NULL);
    printf(NULL);

    _printf("%c", '\0');
    printf("%c", '\0');

    _printf("%");
    printf("%");

    _printf("%!\n");
    printf("%!\n");

    _printf("%K\n");
    printf("%K\n");

    return (0);
}
