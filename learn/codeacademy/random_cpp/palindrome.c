#include <stdio.h>
#define WORDS "bob"

// function
char* rev_text(char text[]);
int stringcompare(char text[], char revtext[]);

int main()
{
    char words[] = WORDS;
    int i;

    printf("%s\n", rev_text(words));
    
    return 0;
}

char* rev_text(char text[]) 
{
    int i, j, k;
    char revtext[i];

    // Find string length of constant
    while (text[i] != '\0')
        ++i;
    j = i - 1;
    
    // swap characters
    for (int k = 0; k < i; ++k) {
        revtext[k] = text[j];
        j--;
    }
    //printf("%s - %s\n", revtext, text);

    return revtext;
}

int stringcompare(char text[], char revtext[])
{
    int a, b = 0;

    while (revtext[a] == text[a])
    {
        if (revtext[a] != text[a])
        {
            b = 0;
            break;
        }
        a++;
    }
    
}