#include<stdio.h>
int main()
{
    int sum1=0,sum2=0,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum1+=i*i;
        sum2+=i;
    }
    printf("%d",sum2*sum2-sum1);
}