#include <stdio.h>

int main() {
    char name[50];
    int age;
    float salary;

    printf(" name:");
     scanf("%s", name);
    printf("age:"); 
     scanf("%d", &age);
    printf("salary: ");
    scanf("%f",&salary);
    
    printf("\nName = %s",name);
    printf("\nAge = %d",age);
    printf("\nSalary = %f",salary);

    return 0;
}