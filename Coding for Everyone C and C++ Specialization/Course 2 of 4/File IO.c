#include <stdio.h>

#define MAX_HW 20

void read_data(FILE *ptr, int d[], int *size){

    *size = 0;
    while(fscanf(ptr,"%d", &d[*size]) == 1){
        (*size)++;
    }
}

void print_data(int d[], int size){

    int i;
    for(i = 0; i<size; i++){
        printf("%d\t",d[i]);

        if((i+1)%10 == 0){
            printf("\n");
        }
    }
}

double average(int d[], int size){

    int i;
    double avg = 0.0;

    for(i = 0; i<size; i++){
        avg += d[i];
    }

    return (avg/size);

}

int main(){
    int i;
    int size = MAX_HW;

    FILE *ifp;

    int data[MAX_HW] = {0};

    ifp = fopen("myhw.txt", "r");
    read_data(ifp,data,&size);

    printf("My %d Home work scores are:\n", size);
    print_data(data, size);
    printf("\nThe average score was %10f", average(data,size));
    printf("\n\n");

    fclose(ifp);
    return 0;
}

 