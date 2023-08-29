#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1, i,j;
	clrscr();
       //	printf("enter n:");
       //	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
	 //	j=n+1-j;
		printf("%d ",a++);
		}
		printf("\n");
	}
	getch();
}