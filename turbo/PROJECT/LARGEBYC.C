#include<stdio.h>
#include<conio.h>
void main()
{                //condition:
	int a,b,c;
	clrscr();
	printf("enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
       //	(a>b)&&(a>c)?printf("a is large no"):(b>c)?printf("b is large no"):
       //	printf("c is large no");
       printf("%d is largest no",((a>b&&a>c)?a:(b>c)?b:c));
	getch();
}