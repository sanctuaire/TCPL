#include <stdio.h>

// using fahr-cels 2nd ver.

int main(void){

    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");

    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\", fahr, celsius);
        fahr = fahr + step;
    }
}