#include <stdio.h>

#define MAXCHAR 100 

int main() {
    
    int i, j;
    int k = 0; 

    char input[25];
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    char result_vowels[MAXCHAR];
    
    printf("%ld + %s\n", sizeof(input), result_vowels); 

    for (i=0; i < sizeof(vowels); i++) {
        scanf("%c", &input[i]);
    }

    printf("%ld + %s\n", sizeof(input), result_vowels); 
       
    for (i = 0; i < sizeof(input); i++) {
        for (j = 0; j < sizeof(vowels); j++) {
            if (input[i] == vowels[j]) {
                if (input[i] == 'u' || input[i] == 'e'){
                    result_vowels[k] = input[i];
                    k++;
                }
                result_vowels[k]= input[i];
                k++;
            }
        }
    }

    printf("%ld\n", sizeof(result_vowels));
    printf("Your Vowel Results from Input == %s\n", result_vowels);
}