#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("n:");
	scanf("%d",&n);
	do
	{
		if(i%2==0)
		{
		printf("%d",i);
		sum=sum+i;	
		}
		i++;
	}
	while(i<=n);
	printf("\ntotal sum=%d",sum);
	 
}