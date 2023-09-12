#include<iostream>
void subarray(int a[],int n,int k)
{
    int i,j,c=0,s=0;
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=i;j<n;j++)
        {
            s=s+a[j];
            if(s==k)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}
int main()
{
    int n,i,j,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    subarray(a,n,k);
}