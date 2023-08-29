#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5, i,j;
	clrscr();
       //	printf("enter n:");
       //	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
	 //	j=n+1-j;
		printf("%d ",j-i+a);
		}
		printf("\n");
	}
	getch();
}