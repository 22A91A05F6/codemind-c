#include<stdio.h>
int main()
{
    int i,n,c=0,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j && a[i]==a[j] && a[i]!=0 && a[j]!=0)
            {
                c=c+1;
                a[i]=0;
                a[j]=0;
            }
        }
    }
        printf("%d",c);
    
}