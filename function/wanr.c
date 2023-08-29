#include<stdio.h>
int product(int a,int b)
{
	int t;
	t=a*b;
	printf("product is:%d",t);
}
	int main()
{
	//product(2,3);
	int x,y;
	printf("Enter x,y:");
	scanf("%d%d",&x,&y);
	product(x,y);
}