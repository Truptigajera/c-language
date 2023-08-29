#include<stdio.h>
void main()
{
	int i=5;
	do
	{
	int j=5;
	while(j>=i)
	{ printf("%d ",i);
	  j--;
	}
	printf("\n");
	i--;
	}
	while(i>=1);
}