#include<stdio.h>
int main()
{
    int n,i,a[50];
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=1;i<n+1;i++)
    {
        a[i+1]=a[i]+a[i-1];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}