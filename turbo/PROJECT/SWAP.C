#include<stdio.h>
#include<conio.h>
void main()            //without third variable
{
	int a,b;
	clrscr();
	printf("a,b:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%da-%db",a,b);
	getch();
}