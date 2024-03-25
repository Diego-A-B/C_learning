#include <stdio.h>

void bank_menu(){
    printf("\tSelect from the Menu:\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Accrue Interest\n");
    printf("4. Balance\n");
    printf("5. QUIT");
}

void deposit(float *balance_ptr){
    float dep_amnt;
    printf("Enter amount being deposited:\n");
    scanf("%f",&dep_amnt);
    if(dep_amnt>0){

        *balance_ptr+=dep_amnt;
    }
    else{
        printf("Deposit must be more than $0.00\n");
    }

}



#define INTERESTRATE 5.00

int main(){

    float balance;
    int select;
    printf("Enter Initial Balance\n");
    scanf("%f",&balance);
    bank_menu();

    while(select != 5)


    return 0;
}