#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j;
	clrscr();
       //	printf("enter n:");
       //	scanf("%d",&n);
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
	 //	j=n+1-j;
		printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}