#include<stdio.h>
void main()
{
	char i='A',n;
	printf("n:");
	scanf("%c",&n);
	do
	{
	printf("%c %c ",i,i+34);
	i+=4;
	}
	while(i<=n);
}