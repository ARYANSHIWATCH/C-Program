#include <stdio.h>
void displayAge(int);//here in declaration name is not necessary of variable but data type is must.
int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d",&age);
    displayAge(age);//here value of age is called arguement.
    printf("age is %d\n",age);
    return 0;
}
void displayAge(int a)//here the value from arguement came and is called parameter.
{
    a=23;
    printf("a=%d\n",a);
}
