#include<stdio.h>
int main()
{
char a[1000],b[1000];
int n,i,j,l=0,c=0;
scanf("%s %s",&a,&b);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
c++;
}
for(j=0;b[j]!='\0';j++)
{
if(b[j]=='a'||b[j]=='e'||b[j]=='i'||b[j]=='o'||b[j]=='u')
l++;
}
if(c>=1&&l>=1)
printf("yes");
else
printf("no");
}
