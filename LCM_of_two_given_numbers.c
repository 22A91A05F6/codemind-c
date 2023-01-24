#include<stdio.h>
int main()
{
    int i,a,b,p,hcf,lcm;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            hcf=i;
        }
    }
    p=a*b;
    lcm=p/hcf;
    printf("%d",lcm);
}