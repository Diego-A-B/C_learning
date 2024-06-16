

#include <stdio.h>

int main(void){

    int data[100];
    int i;

    for(i = 0; i<100; i++){
        data[i] = i+1;
    }

    for(i = 0; i < 100; i++){

        printf("data[%d] = %d\n",i,data[i]);
    }

    return 0;

}