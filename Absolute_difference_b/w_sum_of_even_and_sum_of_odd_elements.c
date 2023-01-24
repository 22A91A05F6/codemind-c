#include<stdio.h>
int main()
{
    int i,n,sum1=0,sum2=0,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum1=sum1+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            sum2=sum2+a[i];
        }
    }
    d=sum1-sum2;
    if(d>0)
    {
        printf("%d",d);
    }
    else
    {
        printf("%d",-d);
    }
}