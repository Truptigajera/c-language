/*#include<stdio.h>
void main()
{
	int i=1;
	do
	{
	int j=1;	
	while(j<=5)
	{
		printf("%d ",j);
		j++;
	}	
	printf("\n");
	i++;
	}
	while(i<=5);
}*/

#include<stdio.h>
void main()
{
	int i=1;
	while(i<=5)
	{
		int j=1;
		while(j<=5)
		{printf("%d ",i);
		j++;
		}
	printf("\n");
	i++;
	}
}