#include <stdio.h>
#define num 100
int main()
{
    int sum,count;
    sum = 0;

    for(count = 0; count<=num;count++)
    {
        sum+=count;
    }
    printf("sum = %d", sum);

    return 0;
}