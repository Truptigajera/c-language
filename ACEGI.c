#include<stdio.h>
void main()
{
	char i='A',n;
	printf("n:");
	scanf("%c",&n);
	while(i<=n)
	{
	printf("%c ",i);
	i+=2;
	}
}