#include<stdio.h>
int main()
{
    int a[1000],i,n,k,f=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>k)
        {
            f=1;
        printf("%d",a[i]);
        break;
        }
    }
}
