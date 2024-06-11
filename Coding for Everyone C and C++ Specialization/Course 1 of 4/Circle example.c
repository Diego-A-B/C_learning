#include <stdio.h>
#include <stdlib.h>


#define PI 3.14159
int main(){

    double area = 0.0, radius = 0.0;

    printf("Enter the radius:\n");
    scanf("%lf",&radius);

    area = PI * radius * radius; 

    printf("radius of %.2lf meters, area is %.2lf meters^2\n", radius,area);


    return 0;
}