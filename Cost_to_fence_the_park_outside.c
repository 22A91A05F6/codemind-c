#include<stdio.h>
int main()
{
    int i,b,w,g,a,c,d,e;
    scanf("%d%d%d%d",&i,&b,&w,&g);
    a=i*b;
    c=(i+2*w)*(b+2*w);
    d=c-a;
    e=d*g;
    printf("%d",e);
}