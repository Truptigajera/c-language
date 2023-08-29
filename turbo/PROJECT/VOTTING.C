#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("age:");
	scanf("%d",&age);
	if(age>18)
	{
	printf("person is can vote :");
	}
	else{
	printf("person can not vote:");
	}
	getch();
}