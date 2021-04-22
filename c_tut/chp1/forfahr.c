#include <stdio.h>

int main()
{
    float fahr;

    printf("FAHR\tCELSIUS\n");
    for (fahr = 0.0; fahr <= 300.0; fahr = fahr + 20.0)
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
}