#include<stdio.h>
void sum()
{
	int n,r,t=0;
	printf("enter number:");
	scanf("%d",&n);
	while(n> 0)
		{
		t=t+n%10;
		n=n/10;
		}
	printf("sum fo digit:%d",t);
}
int main()
{
sum();
}