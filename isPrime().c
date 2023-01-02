#include <stdio.h>
int isPrime(int);
int main()
{
  int num;
  printf("Enter a number to check is prime or not.\n");
  scanf("%d",&num);
  isPrime(num);
}
  
int isPrime(int num)
{
  int prime = 1;
  for(int i=2; i<= num/2; i++)
  {
    if (num%i == 0)
    {
      prime++;
    }
  }
  if (prime==1)
  {
    printf("Number is Prime");
  }
  else
  {
    printf("Number is not prime");
  }
}
