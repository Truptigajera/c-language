#include<stdio.h>
#include<conio.h>
void main()
{           //n to 1
	int n,i;
	clrscr();
	printf("n:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	printf("%d ",i);
	}
	getch();
}