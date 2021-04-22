#include <stdio.h>

/* count blanks, tabs, newlines */
int main()
{
    int c, nt, nl, nb;

    nt = 0;
    nb = 0;
    nl = 0;
    
    while((c = getchar()) != EOF)
    {
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++nb; 
        else if (c == '\n')
            ++nl;
    }
    printf("%d + %d + %d\n", nb, nt, nl);
}