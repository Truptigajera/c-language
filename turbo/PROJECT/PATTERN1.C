#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,l,s;
	clrscr();
	printf("n");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		if(i<0)
			l=-i;
		else
			l=+i;
		for(s=0;s<1;s++)
			printf(" ");
		for(j=0;j<2*(n-l)+l;j++)

		printf("* ");

		printf("\n");
	}
	getch();
}