#include <stdio.h>
int main(){
int marks[]={12,23,3,45,5};
int max=0;
for(int i=0 ; i<=4 ; i++)
{
    if(max < marks[i])
    {
        max = marks[i];
    }
}
printf("MAx marks is %d",max);
return 0;
}