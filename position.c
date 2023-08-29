#include<stdio.h>
void main()
{
	int total=0,sum=0,a[10],i;
	for(i=0;i<5;i++)
	{
	printf("enter val a[%d]:",i);
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
	printf("%d\n",a[i]);

	if(i%2==0)
	sum=sum+a[i];

	else
	total=total+a[i];
	}
	printf("even number total is:%d",sum);
	printf("\nodd number total is:%d",total);
	printf("\nall total is:%d",sum+total);
}