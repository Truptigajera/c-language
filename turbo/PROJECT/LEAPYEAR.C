//find leap year:
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("enter year:");
	scanf("%d",&a);
	if(a%4==0)
	{printf("%d is leap year:");}
	else
	{printf("%d is not leap year:");}
	getch();
}