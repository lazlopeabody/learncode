#include <stdio.h>

#define MAXLINE 100

int _getline(char line[], int maxline);

int main ()
{

    int i, len;
    char line[MAXLINE];

    while (i=0, (len = (_getline(line, MAXLINE))) > 0)
    {

        printf("\tlen = %d\n", len);
        while (line[i] == ' ' || line[i] == '\t')
        {
            printf("Found a blank!\n");
            putchar(line[i]);
            ++i;
        }

        if( i >= 0)
        {
            ++i;
            line[i] = '\n';
            ++i;
            printf("%s", line);
        } 

        printf("whats in the charArray: ");
        while (line[i] > 0)
        {
            putchar(line[i]);
            ++i;
        }
        printf("%d\n", i);

    }
    ++i; 

    return 0;

}

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