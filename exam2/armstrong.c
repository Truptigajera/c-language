#include<stdio.h>
void armstrong()
{
	int sum=0,n,t,a;
	printf("enter number:");
	scanf("%d",&n);
	a = n;
	while(n>0)
	{	
	t=n%10;
	sum=sum+(t*t*t);
	n=n/10;
	}
	if(sum==a)
	printf("%d is Armstrong.",a);
	else
	printf("%d is not Armstrong.",a);
}
int main()
{
armstrong();
}
	