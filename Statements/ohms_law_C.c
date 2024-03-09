//ohm's law calculator

#include <stdio.h>
#include <math.h>

double main()
{
    double voltage, current, resistance;
    char missing;

    printf("What are you solving for?\nEnter v for voltage, i for current, and r for resistance:\n");
    scanf("%c", &missing);

    if (missing == 'v')
    {
        printf("Enter your value for current:\n");
        scanf("%lf",&current);
        printf("Enter your value for resistance:\n");
        scanf("%lf",&resistance);

        voltage = current * resistance;

        return printf("\nV = %.3lf",voltage);
    }

    else if (missing == 'i')
    {
        printf("Enter your value for voltage:\n");
        scanf("%lf",&voltage);
        printf("Enter your value for resistance:\n");
        scanf("%lf",&resistance);

        current = voltage / resistance;

        return printf("\nI = %.3lf",current);
    }

    else if (missing == 'r')
    {
        printf("Enter your value for voltage:\n");
        scanf("%lf",&voltage);
        printf("Enter your value for current:\n");
        scanf("%lf",&current);

        resistance = voltage / current;

        return printf("\nR = %.3lf",resistance);
    }

    else 
    {
        return printf("Error, enter a proper missing variable:\nv, i, or r");
    }

}