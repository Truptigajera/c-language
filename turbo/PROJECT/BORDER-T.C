#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sp=20;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
		{
		printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		if(j==1 || j==i || i==5)
		printf("* ");
		else
		printf("  ");
		}
		sp--;
		printf("\n");

	}
	getch();
}
