#include <stdio.h>

#define RATE 0.05

int main(){

    double balance,money;
    int option;

    balance = 0;

    printf("Select from MENU\n");
    printf("\tMENU\t\n");
    printf("\t1:Deposit\n\t2:Withdraw\n\t3:Balance\n\t4:Interest\n\t5:Quit");
    printf("\n");
    scanf("%d",&option);

    while(option != 5){

        if(option == 1){
            printf("How much do you wish to deposit:\n");
            scanf("%d",&money);
            balance += money;
        }

        else if(option == 2){
            printf("How much do you wish to withdraw:\n");
            scanf("%d",&money);
            balance -= money;
        }

        else if(option == 3){
            printf("Current Balance: $%.2lf",balance);
        }

        else if(option == 4){
            balance  *= (1+RATE);
        }
       
        printf("\t1:Deposit\n\t2:Withdraw\n\t3:Balance\n\t4:Interest\n\t5:Quit");
        printf("\n");
        scanf("%d",&option);

    }

    return 0;
}