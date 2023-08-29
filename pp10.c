#include<stdio.h>
void main()
{
	int i=1,a=5;
	do
	{
	int j=1;
	while(j<=i)
	{ printf("%d ",j-i+a);
	  j++;
	}
	printf("\n");
	i++;
	}
while(i<=5);
	
}