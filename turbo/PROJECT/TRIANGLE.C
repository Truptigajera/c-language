#include<stdio.h>
#include<conio.h>
void main()
{             //a=1/2bh
	float a,b,h;
	clrscr();
	printf("enter b,h:");
	scanf("%f%f",&b,&h);
	a=0.5 * b* h;
	printf("area of triangle :%f",a);
	getch();
}