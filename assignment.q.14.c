#include <stdio.h>

int main()
{
    int A, B, C, D, E;
    int total;
    int percentage;

    printf("Enter marks of 5 subjects:\n");

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    scanf("%d", &E);

    total = A + B + C + D + E;

    percentage = (total / 500) * 100;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %d\n", percentage);

    return 0;
}