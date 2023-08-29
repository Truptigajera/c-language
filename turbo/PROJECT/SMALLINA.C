#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("a,b:");
	scanf("%d%d",&a,&b);
	printf("smallest no is:%d",(a<b?a:b));
	getch();

}