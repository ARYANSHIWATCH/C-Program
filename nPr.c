//nPr=n!/(n-r)!
#include<stdio.h>
int per(int n,int r);
int main()
{
    int n,r,P;
    printf("To find Permutation i.e. : nPr, Enter n and r.\n");
    scanf("%d %d",&n,&r);
    P=per(n,r);
    printf("Permutation for : P(%d,%d) = %d",n,r,P);
    return 0;
}
int per(int n,int r)
{
    int factN=1,factN_R=1;
    int s=n-r;
    for(int i=n ; i>=1 ; i--)
    {
        factN=factN*n;
        n=n-1;
    }

    for(int j=s ; j>=1 ; j--)
    {
        factN_R *= s;
        s=s-1;

    }
    return factN/factN_R;
}
