#include <stdio.h>

int main(){

    int i, arr[10];


    printf("Enter the ten numbers in your array: \n");

    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    
    }


    printf("Your entered array:\t");

    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    printf("Your reversed array:\n");

    for(i=9;i>=0;i--){
        printf("%d ",arr[i]);
    }


    return 0;
}