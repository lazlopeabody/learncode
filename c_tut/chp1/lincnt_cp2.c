#include <stdio.h>

/* Write program to copy input to output,
    replace each blank, tab and each backslash with the followin g
    characters; \b, \t, \\  */

int main()
{
    int c;
    
    while((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        if (c == ' ')
        {
            putchar('\\');
            putchar('b');
        }
        if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }

        if (c != '\t' && c != ' ' && c != '\\')
            putchar(c);
    }
    return 0;
}