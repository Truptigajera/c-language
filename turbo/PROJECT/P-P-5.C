#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	clrscr();
       //	printf("enter n:");
       //	scanf("%d",&n);
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
	 //	j=n+1-j;
		printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}