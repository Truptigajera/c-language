#include<stdio.h>
void main()
{
	char i='A';
	do
	{
	char j='A';
	while(j<=i)
	{printf("%c ",j);
	j++;}
	printf("\n");
	i++;
	}
while(i<='E');
}