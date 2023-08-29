#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("x,y:");
	scanf("%d%d",&x,&y);
	if(2000>=x||3000<=x)
	{printf("x:");}
	if(100<y&&500>y)
	{printf("y:");}
	getch();
}