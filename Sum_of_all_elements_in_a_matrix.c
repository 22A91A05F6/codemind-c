#include<stdio.h>
int main()
{
    int i,j,a,b,s=0;
    scanf("%d%d",&a,&b);
    int c[10][10];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            s=s+c[i][j];
        }
    }
    printf("%d",s);
}