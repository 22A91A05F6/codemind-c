#include<stdio.h>
int main()
{
    int i,n,c=0,max=-1000,a,b;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a || arr[i]>b)
        {
            if(max<arr[i])
            {
                max=arr[i];
                c++;
            }
        }
    }
if(c==0)
{
    printf("-1");
    
}
else
{
    printf("%d",max);
}
}