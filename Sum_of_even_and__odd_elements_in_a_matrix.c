#include<stdio.h>
int main()
{
    int r,c,i,j,s=0,t=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            {
                s=s+a[i][j];
            }
        }
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2!=0)
            {
                t=t+a[i][j];
            }
        }
    }
     printf("%d %d",s,t);

}