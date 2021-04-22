#include <stdio.h>

/* i did not think about using constants, these contastn fo rthi sporgram woudl not change */
#define UPPER 300.0
#define LOWER 0.0
#define STEP 20.0

/* declare function */
float _fahrtocel(void);

float _celtofahr(void);

int main()
{

    int c;

    printf("Please enter which conversion chart you would like\n");
    printf("1 for Fahr to Cel, 2 for Cel to Fahr.\n");

    c = getchar();
    
    if (c == '1')
    {
        printf("FARH\tCELS\n");
        _fahrtocel();
    }
    else if (c == '2')
    {
        printf("CELS\tFAHR\n");
        _celtofahr();
    }
    else
        printf("Wrong Selection");

    return 0;
}

float _fahrtocel()
{
    float celsius, fahr;

    fahr = LOWER;

    while (fahr <= UPPER)
    {   celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }

    return 0;
}

float _celtofahr()
{
    float celsius;

    for(celsius = LOWER; celsius <= UPPER; celsius = celsius+STEP)
        printf("%6.1f\t%3.0f\n", ((9.0 * celsius / 5.0) + 32.0), celsius);

    return 0;

}