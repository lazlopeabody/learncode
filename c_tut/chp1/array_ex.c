#include <stdio.h>
#define MAX 1000

int main(){
    
    int i; 
    char arr[] = {'h', 'h', 'w', 'w', '\0'};
    int len = sizeof(arr);
    printf("%d\n", len);

    for (i=0; i < sizeof(arr); ++i) 
        putchar(arr[i]);

    printf("\n%d\n", (MAX-1));

    return 0;
}