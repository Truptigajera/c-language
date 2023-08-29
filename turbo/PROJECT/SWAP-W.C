#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,x;
	clrscr();
	printf("a,b:");
	scanf("%d%d",&a,&b);
	x=a;
	a=b;
	b=x;
	printf("swappring with third value a\tb:");
	printf("\n\t\t\t%d\t%d",a,b);
	getch();
}