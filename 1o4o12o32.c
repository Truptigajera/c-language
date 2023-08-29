#include<stdio.h>
void main()
{
	int a=1,i=1,n;
	printf("n:");
	scanf("%d",&n);
	do
	{
	
	printf("%d ",a*i);
	a=a*2;
	i++;
	}
	while(i<=n);
}