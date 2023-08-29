#include<stdio.h>
void main()
{
	char i=1, a='A';
	do	
	{
	char j=1;
	while(j<=5)
	{printf("%c ",a++);
	j++;}
	printf("\n");
	i++;
	}
	while(i<=5);
}