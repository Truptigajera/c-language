#include<stdio.h>
void main()
{
	int eng[5],sci[5],guj[5],i,total;
	float per;
	for(i=0;i<5;i++)
	{
	printf("eng[%d]:",i);
	scanf("%d",&eng[i]);
	}	
	printf("\n");
	for(i=0;i<5;i++)
	{
	printf("sci[%d]:",i);
	scanf("%d",&sci[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
	printf("guj[%d]:",i);
	scanf("%d",&guj[i]);
	}
	
	printf("\neng\tsci\tguj\ttotal\tper\tgrade\n");
	for(i=0;i<5	;i++)
	{
	total=eng[i] + sci[i] + guj[i];
	per= total/3;
	
	printf("%d\t%d\t%d\t%d\t%.2f\t",eng[i],sci[i],guj[i],total,per);
	
	if(eng[i]<40 || sci[i]<40 || guj[i]<40)
	printf("Fail");

	else if(per>=75)
	printf("A");

	else if(per>=60)
	printf("B");
	
	else if(per>=40)
	printf("C");

	printf("\n");
	}
}