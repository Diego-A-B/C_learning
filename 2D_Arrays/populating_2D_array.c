#include <stdio.h>

#define SIZE 10

int main(){

    int i,j,ten_by_ten[SIZE][SIZE];

    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            ten_by_ten[i][j] = (i+1)*(j+1);
        }

    }

    printf("2d-Array:\n");

    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            printf("%d\t",ten_by_ten[i][j]);
        }

        printf("\n");
    }
    

    return 0;
}

