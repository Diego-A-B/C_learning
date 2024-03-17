#include <stdio.h>

#define SIZE 10

int main(){


    int i, scores[SIZE], max, count_max;

    FILE * ifp;

    ifp = fopen("test_scores.txt","r");

    for(i=0;i<SIZE;i++){
        fscanf(ifp,"%d", &scores[i]);
    }
    fclose(ifp);

    printf("test scores:\n");
    for(i=0;i<SIZE;i++){
        printf("%d\n",scores[i]);
    }

    max = scores[0];
    count_max = 1;

    for(i=1;i<SIZE;i++){
        if(scores[i]==max){
            count_max++;
        }
        else if(scores[i] > max){
            max = scores[i];
            count_max = 1;
        }
    }

    printf("\nThe highest score is %d\nThere was %d high score(s)", max, count_max);

    return 0;
}