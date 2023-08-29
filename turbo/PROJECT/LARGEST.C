//largest no:
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
	printf("largest no is a:%d",a);
	}
	else if(b>c)
       {
	printf("largest no is b:%d",b);
	}
	else {printf("largestno is c:%d",c);}
	getch();
}