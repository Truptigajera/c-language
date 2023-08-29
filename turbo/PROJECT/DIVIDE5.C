//divisible by 5 or not:         5 or 3 =15
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	if(a%15==0)
	{
	printf("%d is divisable by 5:");
	}
	else
	{printf("%d is not divisable by 5:");}
	getch();
}