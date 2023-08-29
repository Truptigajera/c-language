#include<stdio.h>
void rev()
{
	int n,r,t=0;
	printf("enter number:");
	scanf("%d",&n);
	while(n>0)
		{
		r=n%10;
		//printf("%d",r);
		t=t*10+r;
		n/=10;
		}
	printf("reverse no is:%d",t);
}
	int main()
	{
	rev();
	}