#include <stdio.h>

#define IN 1 
#define OUT 0

/* count lines, words, & characters in input */
int main()
{
    int c, state;
    state = IN;

    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            state = OUT;
            printf("%d - %d", state, c);
        }

        else if (state == OUT) 
        {
            printf("\n%d - %d", state, c);
            state = IN;
            putchar('\n');
            putchar(c);
        }
        else
            putchar(c);
    }
}