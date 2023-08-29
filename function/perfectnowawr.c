//wanr perfect number
#include<stdio.h>
int perfect(int n)
{
	int i=1,sum=0;
	
	while(i<n)
	{
	if(n%i==0)
		{sum=sum+i;
		printf("%d ",i);
		}
		i++;	
	}
	if(sum==n)
	printf("perfect:");
	else
	printf("not perfect:");
		
}
	int main()
	{
	int num,x;
	printf("enter number:");
	scanf("%d",&num);
	perfect(num);
	
	
	}