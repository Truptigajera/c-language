#include<stdio.h>
#include<conio.h>
void main()
{
	float inch,cm;
	clrscr();
	printf("enter inch:");
	scanf("%f",&inch);
	cm=inch*2.54;
	printf("ans is:%f",cm);
	getch();
}