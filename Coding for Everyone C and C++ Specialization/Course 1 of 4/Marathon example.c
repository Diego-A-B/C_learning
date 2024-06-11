#include <stdio.h>

int main(void){

    float miles = 26.0, yards = 385.0;
    float kilometers;

    kilometers = 1.609 * (miles + (yards / 1760.0));
    printf("A marathon is a %lf kilometers", kilometers);
    return 0;


}