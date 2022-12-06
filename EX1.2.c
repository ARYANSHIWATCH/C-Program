#include <stdio.h>
int main()
{
    //program to check the number is even or odd.
    //One line statement to solve given problem.
    int num;
    printf("Enter the nuber.");
    scanf("%d",&num);
    ((num % 2==0) ? printf("Number is even.") : printf("Number is odd."));
    return 0;
}