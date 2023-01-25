#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,f=0;
        float b;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            b=(float)n/i;
            if(b==i)
            {
                printf("True
");
                f=1;
                break;
            }
        }
        if(f==0)
        printf("False
");
    }
}