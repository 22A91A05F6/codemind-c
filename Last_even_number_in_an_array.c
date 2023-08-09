#include<stdio.h>
int main()
{
    int i,n,x;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        if(a[i]%2==0)
        {
           x=a[i]; 
        }
    printf("%d",x);
}