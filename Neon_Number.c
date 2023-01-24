#include<stdio.h>
int main()
{
    int n,m,a,s=0;
    scanf("%d",&n);
    a=n*n;
    while(a>0)
    {
        m=a%10;
        s=s+m;
        a=a/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}