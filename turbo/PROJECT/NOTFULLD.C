#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,l;
	clrscr();
	printf("n");
	scanf("%d",&n);
	for(i=-n;i<=n;i++)
	{
		if(i<0)
			l=-i;
		else
			l=+i;
		for(j=0;j<2*n-l+l;j++)
		{
		if(j<l)
			printf(" ");
		else
			printf("* ");
		}
		printf("\n");
	}
	getch();
}