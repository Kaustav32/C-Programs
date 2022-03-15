#include<stdio.h>
int main()
{
    printf("\n Kaustav Chamola");
    int a;
    abc:
    printf("\n enter the value of a to determine whether it is odd or even");
    scanf("%d",&a);
    if(a %2==0){
    printf("a is an even number");
    }
    else{
    printf("a is an odd number");
    goto abc;
    }
}