#include <stdio.h>

int main(){

int i, arr_1[10];
int sum = 0;
double avg;

for(i=1;i<=10;i++){
    arr_1[i-1] = i;
}

printf("Array:\n");

for(i=0;i<10;i++){
    printf("%d\n",arr_1[i]);
}

for(i=0;i<10;i++){
    sum += arr_1[i];
}

avg = ( (double) sum ) / 10;
printf("The sum of the array is %d\n",sum);
printf("The mean of your array is %.2lf",avg);

return 0;

}