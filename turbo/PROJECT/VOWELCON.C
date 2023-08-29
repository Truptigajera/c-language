#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("enter char:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
	printf("your char is vowel :%c",ch);
	}
	else
	{
	printf("your char is consonent :%c",ch);
	}
	getch();
}