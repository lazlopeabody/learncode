#include <stdio.h>

#define MAXWL 20
#define MAXNO 25
#define TOTALCHAR 128

int main(void)
{
    /* intialize array */
    int word[MAXNO];
    /* init variables for loops and counts */
    int i, c, j, k, nc, nw;

    /*create array*/
    for (i = 0; i < MAXNO; ++i)
        word[i] = 0;
    
    /* initialze count variables for loops to 0, nc == number of characters, 
    nw == number of words */
    nc = nw = 0;

    /* loop to fill the array with user input of words */ 
    while ((c=getchar()) != EOF)
    {
        ++nc;
        if ( c == ' ' || c == '\t' || c == '\n')
        {
            word[nw] = nc -1;
            ++nw;
            nc = 0;
        }
    }

    for( i = MAXWL; i >= 1; --i)

    {
        for (j=0; j<=nw; ++j)
        {
            if( i <= word[j] )
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}