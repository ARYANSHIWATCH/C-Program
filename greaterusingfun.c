#include<stdio.h>
void greaterNum(int,int);
int main()
{
    int num1 , num2;
    printf("Enter two numbers.");
    scanf("%d%d",&num1,&num2);
    greaterNum(num1, num2);
    return 0;
}
void greaterNum(int a,int b)
{
    (
        (a>b)?printf("number a = %d is greater than b= %d.",a,b):
        (b>a)?printf("Number b = %d is greater than a= %d.",b,a):
        printf("Number a = b.")
     );
}