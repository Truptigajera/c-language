/*#include<stdio.h>
void main()
{
	int i=2,n;
	printf("n:");
	scanf("%d",&n);
	while(i<=n)
	{
	printf("%d ",i);
	i+=2;
	}
}*/

#include<stdio.h>
void main()
{
	int i=2,n;
	printf("n:");
	scanf("%d",&n);
	do
	{printf("%d ",i);
	i+=2;}
	while(i<=n);
}