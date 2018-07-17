#include <stdio.h>

// Fahr - Cels table, floating point version

int main(void){

    float fahr, celsius, lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Celsius\tFahrenheit\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        fahr = fahr + step;
    }
}