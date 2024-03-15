#include <stdio.h>

#define pi 3.1415926535898

int main(){

    FILE *ifp;

    ifp = fopen("Jetski_problem.txt","r");

    int cases, day;
    int speed, time;
    double radius,area;
        
    fscanf(ifp,"%d",&cases);

    for(day = 1; day<=cases;day++){
        
        fscanf(ifp,"%d%d",&speed,&time);
        radius = (speed) * (time/60);
        area = (0.5) * (pi) * (radius * radius);

        printf("day %d: %.2lf\n",day,area);

    }

    fclose(ifp);
    return 0;

}