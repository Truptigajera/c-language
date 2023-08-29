#include<stdio.h>
void main()
{
	char i='A',n='Z';
	do
	{
	printf("%c - %d ",i,i);
	i++;
	}
	while(i<=n);
}