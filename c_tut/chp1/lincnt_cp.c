#include <stdio.h>
#define NONBLANK ' '

/* Write program to copy input to output,
    replace each string of one or more blanks by single blank */

int main()
{
    int c, lastc;

    lastc = NONBLANK;
    
    while((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (lastc != ' ') 
               putchar(c);
        }
        else
            putchar(c);
        lastc = c;
    }
    return 0;
}