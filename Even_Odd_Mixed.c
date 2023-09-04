#include<stdio.h>
int main()
{
    int c=0,n,d=0,temp,r;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
       r=n%10;
       if(r%2==0)
       {
           c++;
       }
       else
       {
           d++;
       }
       n=n/10;
    }
if(c>0 && d>0)
{
    printf("Mixed");
}
else if(c>0)
{
    printf("Even");
}
else
{
    printf("Odd");
}
    
    
}