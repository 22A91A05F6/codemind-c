#include<stdio.h>
int main()
{
	int i,n,c=0;
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
			printf("%d ",i);
		}
	}
	if(c==0)
	{
	    printf("-1");
	}
}