#include <stdio.h>

int main()
{
    int A=0, B=0, C=0; 

    printf("Enter number for A:");
    scanf("%d",&A);

    printf("Enter number for B:");
    scanf("%d",&B);

    printf("Enter number for C:");
    scanf("%d",&C);

    int sum = A + B + C;

    printf("A = %d, B = %d, C = %d sum = %d\n", A, B, C, sum);

    return 0;
}