#include<stdio.h>
int arry(int a[],int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    if(a[n-1]>a[n-2])
    {
        return 0;
    }
    return arry(a,n-1);
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(arry(a,n))
    {
        printf("yes
");
    }
    else
    {
        printf("no
");
    }
}