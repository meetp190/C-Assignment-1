#include<stdio.h>
int main(){
    int a,b ;

    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);

    if(a>b)
    {
        printf("a is greater number");
    }
    else if (b>a){

        printf("b is greater number");

    }
    else{
        printf("both number are equal");
    }
    return 0;
}