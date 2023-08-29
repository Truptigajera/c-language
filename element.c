#include<stdio.h>
void main()
{
	int a[10],i,sum=0,total=0;
	for(i=0;i<5;i++)
	{
	printf("enter a[%d]:",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		sum=sum+a[i]; 
		else
		total=total+a[i];
	}
	printf("even=%d",sum);
	printf("\nodd=%d",total);
	printf("\nall total is:%d",sum+total);
}