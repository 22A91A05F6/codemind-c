#include<stdio.h>
int main()
{
    int b,c,h;
    scanf("%d%d%d",&b,&c,&h);
    float a;
    a=((b+c)/2.0)*h;
    printf("%0.4f",a);
}