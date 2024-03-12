#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, score, i,num;

    sum = 0;

    printf("How many valid scores are we expecting:\n");
    scanf("%d",&num);
    

    for(i=1;i<=num;i++)
    {
        printf("Enter a valid score:\n");
        scanf("%d",&score);

        if(score < 0 || score > 100){
            i--;
            continue;
        }

        sum+=score;
    }

    printf("Sum of scores: %d",sum);
    return 0;
}