#include <stdio.h>
#include "gtline.h"
#include "strindex.h"

#define MAXLINE 1000 /* maxium input line length */

int gtline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould"; /*pattern to search for*/

/*find all lines matching pattern */
int main()
{
    char line[MAXLINE];
    int found = 0;
    printf("%s", line);

    while (gtline(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    return found;
}