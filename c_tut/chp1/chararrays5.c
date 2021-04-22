#include <stdio.h>

#define MAXLINE 1000    /* max input line length */
#define LIMIT 80        /* limit to print length of characters */

/* declare functions */
int _getline(char line[], int maxline);
int removechar(char s[]);

int main()
{
    int max;                /* max length seen so far */
    char line[MAXLINE];     /* current input line */

    max = 0;
    /* length of line is set by the return of the function _getline */
    while ((_getline(line, MAXLINE)) > 0)
        if (removechar(line) > 0) {
            printf("Word Length %d + %s\n", max-1, line); 
        }
        
    return 0;
}

/* getline function: read a line into s, return length */
int _getline(char s[], int lim)
{
    int c, i;

    for (i=0; i < lim-1 && (c=getchar()) !=EOF && c!='\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    
    s[i] = '\0';
    return i;
}

/* remove char function: remove tabs & trailing blanks */
int removechar(char s[])
{
    int i;

    while (s[i] != '\n')
        ++i;

    --i; /* to consider raw line without \n */

    while ( i >= 0 && ((s[i] == ' ' || s[i] == '\t')))
        --i; /* removing the trailing blanks & tab spaces */

    if( i >= 0 )
    {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}