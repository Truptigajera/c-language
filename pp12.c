#include<stdio.h>
void main()
{
	char i=1,a='A';
	while(i<=5)
	{	char j=1;
		while(j<=i)
		{
		if(j%2==0)
		printf("%c ",a);
		else
		printf("%c ",a+32);
		a++;
		j++;
		}
	printf("\n");
	i++;
	}
	
}