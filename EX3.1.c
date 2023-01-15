#include <stdio.h>
int fibo(int);
void main()
{
  int num;
  printf("Enter the number of terms you want to print of Fibonacci Series.\n");
  scanf("%d",&num);
  fibo(num);
  
}

int fibo(int num)
{
  int a=0;
  int b=1;
  int c;
  printf("%d\n%d\n",a,b);
  for (int i=2 ; i<= num; i++)
  {
    c=a+b;
    a=b;
    b=c;
    printf("%d\n",c);
  }
