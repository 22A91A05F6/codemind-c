#include<stdio.h>
int main()
{
    float pf,gs,hra,da,bs;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    gs=bs+hra+da+pf;
    printf("%0.2f
",pf);
    printf("%0.2f",gs);
}