/*#include<stdio.h>
void main()
{
	int i=2;
	do	{ int j=2;
		  while(j<=10)
		  { printf("%d ",i);
			j+=2;}
	printf("\n");
	i+=2;	}
	while(i<=10);
}*/

#include<stdio.h>
void main()
{
	int i=1;
	while(i<=10)
	{ int j=1;
	   while(j<=10)
		{
		printf("%d ",i);
		j+=2;
		}
	printf("\n");
	i+=2;
	
	}
}