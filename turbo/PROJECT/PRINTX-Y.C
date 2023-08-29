#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("x,y:");
	scanf("%d%d",&x,&y);
	if(x<=2000 || x>=3000)
	printf("x:");
	if(y>100 && y<500)
	printf("y:");
	getch();
}