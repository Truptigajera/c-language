#include<stdio.h>
#include<conio.h>
void main()
{

	char ch,ascii;
	clrscr();
	printf("enter char:");
	scanf("%c",&ch);
	if(ch<='A')
	{
	ascii=ch+32;
	printf("\nsmallchar is:%c",ascii);
	}
	else if(ch<='a')
	{
	ascii=ch-32;
	printf("\ncapital char is:%c",ascii);
	}
	getch();
}