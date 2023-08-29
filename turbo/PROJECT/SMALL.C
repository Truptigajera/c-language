#include<stdio.h>
#include<conio.h>
void main()
{                  //small with condition ?true:false
	int a,b;
	clrscr();
	printf("a,b:");
	scanf("%d%d",&a,&b);
	printf("%d is smallest no",(a<b?a:b));
	getch();
}