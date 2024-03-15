#include <stdio.h>

int main(){

    FILE *ifp;

    int cases;

    ifp = fopen("Kakuro_problem.txt","r");
    fscanf(ifp,"%d",&cases);

    int i, sum, target, d1, d2, d3;

    for(i = 1; i <= cases; i++){
        
        fscanf(ifp,"%d%d%d%d",&target,&d1,&d2,&d3);

        sum = d1+d2+d3;

        if(sum == target){
            if(d1 != d2 && d1 != d3 && d2 != d3){
                printf("This is a proper triplet\n");
            }

            else 
                printf("NOT a proper triplet\n");
        }

        else 
            printf("NOT a proper triplet\n");

    }

    fclose(ifp);
    return 0;
}