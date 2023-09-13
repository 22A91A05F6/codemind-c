#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=n/2;
    for(i=(n-1);i>=k;i--)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",a[i]);
    }
}