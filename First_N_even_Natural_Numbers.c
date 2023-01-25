#include<stdio.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        s=2*i;
        printf("%d ",s);
    }
}