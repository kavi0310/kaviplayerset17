#include<stdio.h>
int main()
{
    int a,b,f1=1,f2=1,i,j,gcd,k;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++)
    {
        f1=f1*i;
    }
    for(j=1;j<=b;j++)
    {
        f2=f2*j;
    }
    for(k=1;k<=f1&&k<=f2;k++)
    {
        if(f1%k==0&&f2%k==0)
        gcd=k;
    }
    printf("%d",gcd);
}
