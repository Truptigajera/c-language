#include<stdio.h>
#include<conio.h>
void main()
{
	int sp=20,i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=sp;j++)
		{
		printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		printf("* ");
		}
		printf("\n");
	}
	getch();
}