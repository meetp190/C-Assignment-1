#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter temperature in C: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("Temperature in F = %.2f", f);

    return 0;
}