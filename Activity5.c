#include <stdio.h>

int main()
{
    int number = 0;
    double a = 0;
    double b = 0;
    double sum;
    double difference;
    double product;
    double quotient;

    printf("Enter number from 1-4: ");
    scanf("%d", &number);

    if (number == 1)
    {
        printf("Enter number for a: ");
        scanf("%lf", &a);

        printf("Enter number for b: ");
        scanf("%lf", &b);

        sum = a + b;

        printf("a = %.2lf, b = %.2lf, sum = %.2lf\n", a, b, sum);
    }
    else if (number == 2)
    {
        printf("Enter number for a:");
        scanf("%lf", &a);

        printf("Enter number for b: ");
        scanf("%lf", &b);

        difference = a - b;

        printf("a = %.2lf, b = %.2lf, difference = %.2lf\n", a, b, difference);
    }
    else if (number == 3)
    {
        printf("Enter number for a:");
        scanf("%lf", &a);

        printf("Enter number for b:");
        scanf("%lf", &b);

        product = a * b;

        printf("a = %.2lf, b = %.2lf, product = %.2lf\n", a, b, product);
    }
    else if (number == 4)
    {
        printf("Enter number for a:");
        scanf("%lf", &a);

        printf("Enter number for b:");
        scanf("%lf", &b);
    
    if (b == 0)
    
        printf("b cannot be 0\n");

        quotient = a / b;

        printf("a = %.2lf, b = %.2lf, quotient = %.2lf\n", a, b, quotient);
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}