#include<stdio.h>
void greaterNum();
int main()
{
    //Here function is of take nothing and return nothing type. 
    //we are just simply calling our function.
    greaterNum();
    return 0;
}

void greaterNum()
{
    int a,b;
    printf("Enter Two numbers.");
    scanf("%d%d",&a,&b);
    (
        (a>b)?printf("number a = %d is greater than b= %d.",a,b):
        (b>a)?printf("Number b = %d is greater than a= %d.",b,a):
        printf("Number a = b.")
     );
}