#include<stdio.h>
void main()
{
	char i=1,a='A';
	while(i<=5)
	{	char j=1;
		while(j<=i)
		{
		if(i%2==0)
		printf("%c ",a+32);
		else
		printf("%c ",a);
		a++;
		j++;
		}
	printf("\n");
	i++;
	}
	
}