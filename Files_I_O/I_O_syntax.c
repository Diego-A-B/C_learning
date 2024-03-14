#include <stdio.h>

int main(){

    FILE *ifp;

    int num, sum;

    num = -1;
    sum = 0;
    ifp = fopen("numbersfile_1.txt","r");

    while(num != 0){
        fscanf(ifp,"%d",&num);
        sum+=num;
    }

    fclose(ifp);
    printf("%d",sum);

    return 0;
}