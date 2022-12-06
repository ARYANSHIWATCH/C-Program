#include <stdio.h>
int main(){
/*write a program to calculate insurance amount.If age is 21-30 amount is 10000
and age is 31-40 amount is 15000, age 41-50 amount is 20000 and if age is 
50-60 amount is 40000. But if insurer is female she will get discount of 10% or 
if smoker than panelty should be paid of 10%.*/
int age;
char choice;
printf("Enter The Age Of Insurer.");
scanf("%d",&age);

if (age>=21 && age<=30)
{   
    printf("The amount is 10000\n");
    printf("If insurer smokes or a female then select choice\n s: for smoker \n f: for female\n"); 
    fflush(stdin);
    scanf("%d",&choice);
    if(choice=='s')
    {
        printf("You have to pay 10-percent penalty\n");
        printf("10000 + 1000(10 percent of amount) = 11000\n");
    }

    else if (choice=='m')
    {
       printf("You have to pay 10-percent discount");
        printf("10000 - 1000(10 percent of amount) = 9000");
    }
    
}
if (age>=31 && age<=40)
{   
    printf("The amount is 15000\n");
    printf("If insurer smokes or a female then select choice\n 1: for smoker \n 2: for female\n"); 
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("You have to pay 10-percent penalty\n");
        printf("15000 + 1500(10 percent of amount) = 11500\n");
    }

    else if (choice==2)
    {
       printf("You got 10-percent discount\n");
        printf("15000 - 100(10 percent of amount) = 8500");
    }
    
}
if (age>=41 && age<=50)
{   
    printf("The amount is 20000\n");
    printf("If insurer smokes or a female then select choice\n 1: for smoker \n 2: for female\n"); 
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("You got 10-percent penalty\n");
        printf("20000 + 2000(10 percent of amount) = 22000\n");
    }

    else if (choice==2)
    {
       printf("You have to pay 10-percent discount");
        printf("20000 - 2000(10 percent of amount) = 18000");
    }
    
}
if (age>=51 && age<=60)
{   
    printf("The amount is 40000\n");
    printf("If insurer smokes or a female then select choice\n 1: for smoker \n 2: for female\n"); 
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("You have to pay 10-percent penalty\n");
        printf("40000 + 4000(10 percent of amount) = 44000\n");
    }

    else if (choice==2)
    {
       printf("You have to pay 10-percent discount");
        printf("40000 - 4000(10 percent of amount) = 36000");
    }
    
}
return 0;
}