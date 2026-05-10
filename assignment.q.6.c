#include<stdio.h>
int main(){
    int n;

    printf("Enter the number :");
    scanf("%d",&n);

    if(n%3 ==0 && n%5 == 0){
        printf(" divisible by both 3 & 5");

    }
    else if(n%3 == 0 || n%5 == 0){
        printf(" divisible by either 3 or 5");
    }
    else {
        printf(" not divisible by both 3 & 5");

    }
    return 0;

}