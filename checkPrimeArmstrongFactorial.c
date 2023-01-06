/*
Ex-5	Program to implement user defined functions in C language.
Write a program with the following functions
is_prime()
is_armStrong()

factorial(n) // to calculate factorial of n
*/ 		
#include <stdio.h>
void is_prime(int);
void is_ArmStrong(int);
int factorialOf(int);
int main(){
int choice;
printf("To check prime press : 1\nTo check armstrong press : 2\n To find Factorial press : 3\n");
scanf("%d",&choice);
switch (choice)
{
case 1: 
    printf("Enter a number to check it is prime.\n");
    int num;
    scanf("%d",&num);
    is_prime(num);
    break;

case 2:
    printf("Enter a three digit number to check is armstrong.\n");
    int num1;
    scanf("%d",&num1);
    is_ArmStrong(num1);
    break;

case 3:
    printf("Enter a number to find its factorial.");
    int num2;
    scanf("%d",&num2);
    int value=factorialOf(num2);
    printf("%d",value);
    break;
default:
    printf("Please Enter correct choise.");
    break;
}
return 0;
}
void is_prime(int x)
{
    
    int prime=1;
    for (int i=2 ; i<=x/2 ; i++)
    {
        if(x%i==0)
        {
            prime++;
            break;
        }
    }
    if(prime==1)
    {
        printf("Is prime.");
    }
    else
    {
        printf("Is not prime.");
    }

}
void is_ArmStrong(int num1)
{
    int power=0,remainder,armStrong=1;
    int i=num1;
    while(i != 0)
    {
        remainder = i % 10;
        power += (remainder*remainder*remainder);
        i/=10;
    }
    if (power!=num1)
    {
        armStrong++;
    }
    ((armStrong==1) ? printf("Is ArmStrong") : printf("Is not ArmStrong"));
}
int factorialOf(int num)
{
    int fact=1;
    for(int i=num;i>=1;i--)
    {
        
        fact=fact*num;
        num=(num-1);
    }
    return fact;
}
