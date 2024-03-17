#include <stdio.h>

#define SIZE 11

int main(){

    int i,j,tri[SIZE][SIZE];

    for(i=0;i<SIZE;i++){
        tri[i][i] = 1;
        tri[i][0] = 1;
    }

    for(i=2;i<SIZE;i++){
        for(j=1;j<i;j++){
            tri[i][j] = tri[i-1][j-1] + tri[i-1][j];
        }
    }

    for(i=0;i<SIZE;i++){
        for(j=0;j<=i;j++){
            printf("%4d ",tri[i][j]);
        }

        printf("\n");
    }

    return 0;

}