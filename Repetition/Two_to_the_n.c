#include <stdio.h>
#include <math.h>

int main()
{
    int n,result;

    printf("|n|\t|2^n|\n");

    for(n=0,result=1;n<=10;n++,result*=2)
    {
        printf("|%d|\t|%d|\n",n,result);
    }

    return 0;
}