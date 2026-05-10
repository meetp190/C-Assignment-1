#include <stdio.h>
int main() {
    int a;
    float b;
    char ch;

    printf("Enter integer: ");
    scanf("%d", &a);

    printf("Enter float: ");
    scanf("%f", &b);

    printf("Enter character: ");
    scanf("%ch", &ch);

    printf("\ninteger = %d", a);
    printf("\nfloat = %f", b);
     printf("\ncharacter = %c", ch);

   return 0;
}