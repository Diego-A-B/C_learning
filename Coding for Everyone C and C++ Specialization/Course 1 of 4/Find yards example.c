#include <stdio.h>
//find the amount of yards in a marathon//

#define FEET_IN_MILE  5280 
#define FEET_IN_YARD  3

int main(void){
    float miles = 26.1, yards;

    yards = (miles * FEET_IN_MILE ) / FEET_IN_YARD;


    printf("%f yards in marathon",yards);
    return 0;

}