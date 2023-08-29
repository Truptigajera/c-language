#include<stdio.h>
#include<conio.h>
void main()
{
	float si,p,r,t;
	clrscr();
	printf("enter p,r,t:");
	scanf("%f%f%f",&p,&r,&t);
	si=p*r*t;
	printf("ans of si:%f",si);
	getch();
}