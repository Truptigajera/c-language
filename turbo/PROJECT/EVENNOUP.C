#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("n:");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
	printf("%d ",i);
	}
	getch();
}
