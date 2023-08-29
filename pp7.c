#include<stdio.h>
void main()
{
	char i=1,a='A';
	while(i<=5)
	{
		char j=1;
		while(j<=i)
		{printf("%c ",a++);
		j++;}
	printf("\n");
	i++;
	}
}