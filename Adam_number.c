#include<stdio.h>
int main()
{
    int n,b,c,r,s=0,d,p=0,q;
    scanf("%d",&n);
    b=n*n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    d=s*s;
    while(d!=0)
    {
        q=d%10;
        p=p*10+q;
        d=d/10;
    }
    if(p==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}