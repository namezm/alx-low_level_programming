#include "main.h"

/**
 * print_alphabet - prints the alphabe, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
    char ch;
    int a;

    for (a = 1; a <= 10; a++)
    {
        for (ch = 'a'; ch <= 'z'; ch++)
        {
                    _putchar(ch);
        }
    }

        _putchar('\n');
}
