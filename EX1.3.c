#include <stdio.h>
int main()
{
  //here is the program whether the year is leap year or not.
    int year;
    printf("Enter the year.");
    scanf("%d",&year);
    //this is single line statement of using if and else.
    (
      (year%400==0 || year%4==0) ?
      printf("The Year %d is Leap",year) :
      printf("The year %d is not Leap",year)
    );
return 0;
}