#include <stdio.h>
#define NUM 100

int main()
{
    int count, sum;
    sum = 0;
    count = 0;

    while (count <= NUM)
    {
        sum = sum + count;

        count++;
    }

    printf("%d",sum);

    return 0;
}