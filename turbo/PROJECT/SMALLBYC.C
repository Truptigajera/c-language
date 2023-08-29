#include<stdio.h>
#include<conio.h>
void main()
{            // condition ? true : false
	int a,b;
	clrscr();
	printf("enter a,b:");
	scanf("%d%d",&a,&b);
       //	a<b?printf("small a:"):printf("small b:");
       printf("%d is smallest no ",(a<b?a:b));
	getch();
}