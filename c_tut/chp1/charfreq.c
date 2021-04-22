#include <stdio.h>

#define TOTALCHAR 128 
/* stack smashing detected when define is set 100 char of total char */
/* remeber tony that you can print ASCII characters by decimal, hex, oct
    bin -- to get symbol realted to number. You got stuck on this program 
    because  you didnot understand looping through numbers and putchar would 
    print the character. */

int main(){

    int c, i, j;
/*
    for (i=0; i < TOTALCHAR; ++i)
        printf("%d\n", i);
*/
    char _char[TOTALCHAR];

    /* initialize array */
    for (i = 0; i <= TOTALCHAR; ++i)
    {
        _char[i] = 0;
    }

    /* feed user input into array */
    while ((c = getchar()) != EOF)
    {
        _char[c] = _char[c] + 1;
    }

    /* this loop will start to loop through variable of total number
        then double through a second loop that is determined by the first variable 
        from the first loop, and if var i = var j, then print the * to reflect 
        the character is present. if the letter or char is present twice like
        'AA' the first loop will ensure the second loop doesnt exit before
        finding it.
    */

    for (i = 0; i < TOTALCHAR; ++i)
    {
        /* print the characters to be checked */
        /*putchar(i);*/

        for(j = 0; j < _char[i]; ++j)
        {

            if ( j == _char[i])
                putchar(i);
            else
                putchar('*');

        }

    }
    putchar('\n');

    return 0;

}