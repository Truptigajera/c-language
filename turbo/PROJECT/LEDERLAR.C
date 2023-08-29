#include<stdio.h>
#include<conio.h>
void main()
{               //largest in leder condition ? :
	int a,b,c;
	clrscr();
	printf("a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	printf("largest no is:%d",((a>b)&&(a>c)?a:(b>c)?b:c));
	getch();
}