#include<stdio.h>
void main()
{
	int a[]={11,12,13,14,15},i;
	int b[]={11,12,13,14,15};
	printf("\na\tb\ttotal\n");
	for(i=0;i<5;i++)
	{
	printf("%d\t%d\t%d\n",a[i],b[i],a[i]+b[i]);
	}
}