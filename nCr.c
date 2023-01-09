#include<stdio.h>
int fun(int);
int main()
{
  int n,r;
  printf("Enter N and R to find nCr.");
  scanf("%d%d",&n,&r);
  int d=n-r;
  int x=fun(n),y=fun(r),z=fun(d);
  printf("nCr is : %d",x/(y*z));
  return 0;
}
int fun(int a)
{
  int fact=1;
  for(int i=1 ; i<=a ; i++)
  {
    fact=fact*i;
  }
  return fact;
