#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)

		if(a>c)
		printf("largest a:");
		else
		printf("lagest c:");

	else
		if(b>c)
		printf("largest b:");

		else
		printf("largest c:");
		getch();
}