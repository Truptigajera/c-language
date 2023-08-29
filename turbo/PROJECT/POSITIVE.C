//positive or negtive number:
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	if(a>0)
	{
	printf("%d is positive no\n:%d",a);
	}
	else
	{
	printf("%d is negative no\n:%d",a);
	}
	getch();
}