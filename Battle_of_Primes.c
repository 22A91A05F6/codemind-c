#include<stdio.h>
int checkprime(int n)
{
    int i,c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==0)
    return 0;
    else
    return 1;
}
int main()
{
    int n1,n2,n3=1,t,a;
    scanf("%d%d",&n1,&n2);
    t=n1+n2+n3;
    a=checkprime(t);
    while(a)
    {
        n3=n3+1;
        t=n1+n2+n3;
        a=checkprime(t);
    }
    printf("%d",n3);
}