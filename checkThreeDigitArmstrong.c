#include<stdio.h>
void isArmStrong(int);
int main()
{
  int num;
  printf("Enter a Three digit number.");
  scanf("%d",&num);
  isArmStrong(num);
  return 0;
}
void isArmStrong(int num)
{ 
  int remainder,power=0,isArm=1;
  int i=num;
  while(i!=0)
  {
    remainder = i%10;
    power+=(remainder*remainder*remainder);
    i/=10;
  }
  if (num!=power)
  {
    isArm++;
    
  }
  ((isArm==1) ? printf("Number is ArmStrong") : printf("Number is not ArmStrong"));
}
