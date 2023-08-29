#include<stdio.h>
#include<conio.h>
void main()
{
	char a=65, i,j;
	clrscr();
       //	printf("enter n:");
       //	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		if(i%2==0)
		{printf("%c ",a+32);}
		else{printf("%c ",a);}
		a++;
		}
		printf("\n");
	}
	getch();
}