#include<stdio.h>
int main()
{
	int a[5],i;
	int b[]={11,12,13,14,15,16,17};
	for(i=0;i<5;i++)
	{
	printf("enter val a[%d]",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	printf("b[%d]:%d\n",i,a[i]);
	}
}
	
	