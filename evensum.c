#include<stdio.h>
void main()
{
	int i=2,sum=0,n;
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