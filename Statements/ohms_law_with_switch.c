#include <stdio.h>
#include <math.h>

double main()
{
    double voltage, current, resistance;
    char missing;

    printf("What are you solving for?\nEnter V for voltage, I for current, and R for resistance:\n");
    scanf("%c", &missing);

    switch(missing)
    {
        case 'V':
            printf("Enter your value for current:\n");
            scanf("%lf",&current);
            printf("Enter your value for resistance:\n");
            scanf("%lf",&resistance);

            voltage = current * resistance;

            printf("%c = %.3lf", missing, voltage);

            break;

        case 'I':
            printf("Enter your value for voltage:\n");
            scanf("%lf",&voltage);
            printf("Enter your value for resistance:\n");
            scanf("%lf",&resistance);

            current = voltage / resistance;

            printf("%c = %.3lf", missing, current);

            break;

        case 'R':
            printf("Enter your value for voltage:\n");
            scanf("%lf",&voltage);
            printf("Enter your value for current:\n");
            scanf("%lf",&current);

            resistance = voltage / current;

            printf("%c = %.3lf", missing, resistance);

            break;
    default:
        printf("Invalid missing variable.\n");
     
    }

     return 0;

}