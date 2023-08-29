#include<stdio.h>
int perfect(int n)
{
	int i=1,sum=0;
	while(i<n)
	{
	if(n%i==0)
	sum=sum+i;
	i++;
	}
	return 0;
		
}
	int main()
	{
	int n,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	
	if(sum==n)
	printf("%d is prefect no.",n);

		else
	printf("%d is not perfect no.",n);
	
	}