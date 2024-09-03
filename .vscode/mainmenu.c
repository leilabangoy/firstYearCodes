#include <stdio.h>

int main()
{
    int number = 0;
    double a = 0, b = 0, c = 0, d = 0;
    double sum = 0;
    double difference = 0;
    double product = 0;
    double quotient = 0;

    printf("Enter number from 1-5: ");
    scanf("%d", &number);

    if (number == 1)
    {
        printf("Enter a number for  a: ");
        scanf("%lf", &a);

        printf("Enter a number for b: ");
        scanf("%lf", &b);

        sum = a + b;

        printf("a  = %.2lf, b =%.2lf, sum = %.2lf\n ", a, b, sum);
    }
    else if (number == 2)
    {
        printf("Enter a number for a: ");
        scanf("%lf", &a);
        printf("Enter a number for b: ");
        scanf("%lf", &b);
        printf("Enter a number for c: ");
        scanf("%lf", &c);

        difference = a - b - c;

        printf("a  = %.2lf, b =%.2lf, c =%.2lf, difference = %.2lf\n", a, b, c, difference);
    }
    else if (number == 3)
    {
        printf("Enter a number for a: ");
        scanf("%lf", &a);
        printf("Enter a number for b: ");
        scanf("%lf", &b);
        printf("Enter a number for c: ");
        scanf("%lf", &c);
        printf("Enter a number for d: ");
        scanf("%lf", &d);

        product = a * b * c * d;

        printf("a  = %.2lf, b =%.2lf,  c = %.2lf, d =%.2lf, product = %.2lf", a, b, c, d, product);
    }
    else if (number == 4)
    {
        printf("Enter a number for  a: ");
        scanf("%lf", &a);

        printf("Enter a number for b: ");
        scanf("%lf", &b);

        if (b == 0)

            printf("b cannot be 0\n");

        quotient = a / b;

        printf("a  = %.2lf, b =%.2lf, quotient = %.2lf\n ", a, b, quotient);
    }
    else if (number == 5)
    {
        printf("Goodbye!!!");
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}