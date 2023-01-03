// This is the Program to find minimum term in an array.
#include<stdio.h>
int main()
{
  int marks[]={12,23,3,5543,21}
  int min=marks[0];
  for(int i=1 ; i<=4 ; i++)
  {
    if(min > marks[i])
    {
      min = marks[i];
    }
  }
  printf("The Minimest term of The array is %d",min);
  return 0;
}
