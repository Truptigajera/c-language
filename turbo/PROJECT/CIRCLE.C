#include<stdio.h>
#include<conio.h>
void main()
{
	float A,pi,r;
	clrscr();
	printf("enter pi, r:");
	scanf("%f%f",&pi,&r);
	A=pi*r*r;
	printf("circle ans A:%.2f",A);
	getch();
}