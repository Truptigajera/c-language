#include<stdio.h>
int add()
{
	int a,b,t;
	printf("Enter a,b:");
	scanf("%d%d",&a,&b);
	t=a+b;
	return t;
}
	int main(){
	int x;
	x=add();
	printf("Addition of a and b is:%d",x);
}