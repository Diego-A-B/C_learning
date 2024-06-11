#include <stdio.h>

int main(void){

    float fahrenheit, celsius;

    printf("Please enter the temperature in Fahrenheit\n");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit -32) / 1.8;

    printf("Temp. in celcius = %.2f", celsius);

    return 0;

}