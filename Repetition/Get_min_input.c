#include <stdio.h>


int main()
{
    int min,num,i;
    printf("Enter the score 1 of five exams:\n");
    scanf("%d", &min);


    for(i=1;i<5;i++)
    {
        printf("Enter score %d:\n",i+1);
        scanf("%d",&num);

        if (num<min)
        {
            min = num;
        }
    }

    printf("Your lowest score is %d",min);
    return 0;
}