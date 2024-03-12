#include <stdio.h>

int main()
{
    int sum, num;
    sum = 0;

    printf("Enter a list of integers when prompted, end the list with 0:\n");
    scanf("%d",&num);

    while (num != 0)
    {
        sum = sum + num;
        scanf("%d",&num);
    }

    printf("Your sum of integers is: %d",sum);

    return 0;
}