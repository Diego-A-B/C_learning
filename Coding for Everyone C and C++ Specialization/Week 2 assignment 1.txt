#include <stdio.h>
#include <math.h>

int main(void){
    int key = 1;
    double x;
    
    while(key == 1){
    
        printf("Please enter a number, x, between 0 to 1 (must be an angle in radians):\n");
        scanf("%lf",&x);

        if(x >= 0 && x <= 1){
            printf("Sin(%lf) = %lf ",x, sin(x));
            key = 0;
        }
        else{
            printf("Please choose a number between 0 and 1\n");
            key = 1;
        }
    }
    return 0;
}