#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("n:");
	scanf("%d",&n);
	while(i<=n)
	{
	printf("%d ",i);
	sum=sum+i;
	i+=2;
	}
	printf("\ntotal=%d",sum);
}