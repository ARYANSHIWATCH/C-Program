#include <stdio.h>
int main(){
int a[10];
printf("Enter 10 numbers ");
for(int i=0 ; i<2 ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("print 10 numbers ");
for(int i=0 ; i<2 ; i++)
    {
        printf(" %d\n",a[i]);
    }

return 0;
}