#include<stdio.h>
#include<conio.h>
void main()
{
	char ch,ascii;
	clrscr();
	printf("enter char:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
	ascii=ch+32;
	printf("your small char ascii is %d",ascii);
	}
	else if(ch>='a'&&ch<='z')
	{
	ascii=ch-32;
	printf("your capital char ascii is:%d",ascii);
	}
	getch();
}