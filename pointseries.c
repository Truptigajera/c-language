#include<stdio.h>
void main()
{
	
	float a=0.5,i=0.5,n;
	printf("n:");
	scanf("%f",&n);
	printf("%f ",a);
	while(i<=n)
	{
	a=a+i;
	printf("%.1f ",a);
	i++;
	}
}