#include<stdio.h>
#include<conio.h>
void main()
{
	int feet,inches;
	clrscr();
	printf("enter feet:");
	scanf("%d",&feet);
	inches=feet*12;
	printf("ans is:%d",inches);
	getch();
}