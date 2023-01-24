#include<stdio.h>
int main()
{
    int s,t,b,c,v;
    scanf("%d%d%d",&s,&t,&b);
    c=2*s*t*b*512;
    v=c/1024;
    printf("%d KB",v);
}