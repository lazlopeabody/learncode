#include <stdio.h>

#define LOWER 0.0
#define UPPER 300.0
#define STEP 20.0

int main()
{
    float fahr;

    printf("FAHR\tCELSIUS\n");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
}