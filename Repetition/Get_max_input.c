#include <stdio.h>


int main()
{
    int max,num,i;
    printf("Enter the score 1 of five exams:\n");
    scanf("%d", &max);


    for(i=1;i<5;i++)
    {
        printf("Enter score %d:\n",i+1);
        scanf("%d",&num);

        if (num>max)
        {
            max = num;
        }
    }

    printf("Your highest score is %d",max);
    return 0;
}