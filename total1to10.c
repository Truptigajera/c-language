#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("n:");
	scanf("%d",&n);
	do
	{
	printf("%d ",i);
	sum=sum+i;
	i++;
	}
	while(i<=n);
	printf("\ntotal=%d",sum);

	
}