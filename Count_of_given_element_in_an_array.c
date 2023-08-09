#include<stdio.h>
int main()
{
    int i,n,c=0,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        if(a[i]==p)
        {
            c++;
        }
    }
    printf("%d",c);
}