#include<stdio.h>
void main()
{
	float grade[5],eng[5],sci[5],guj[5],total[5],per[5],i;
	for(i=0;i<5;i++)
	{printf("enter eng[%f]:",i);
		scanf("%f",&eng[i]);}
	//printf("eng[%d]\nsci[%d]\nguj[%d]\n",i,i,i);
	//scanf("%d%d%d",&eng[i],&sci[i],&guj[i]);
	printf("\n");
	for(i=0;i<5;i++)
	{
	printf("enter sci[%f]:",i);
	scanf("%f",&sci[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
	printf("enter guj[%f]:",i);
	scanf("%f",&guj[i]);
	}
	printf("\neng\tsci\tguj\ttotal\tper\tgrade\n");
	//for(i=0;i<5;i++)
	
	total[i]=eng[i]+sci[i]+guj[i];
	if(eng[i] || sci[i] || guj[i]<40)
	printf("Fail");
	else
	{
	per[i]=(total[i]/300) * 100;
	if(per[i]>=75) 
	printf("A");
	else if(per[i]>=60)
	printf("B");
	else if(per[i]>=40)
	printf("C");
	}
	
	for(i=0;i<5;i++)
	{
	printf("%f\t%f\t%f\t%f\t%f\t%f\n",eng[i],sci[i],guj[i],total[i],per[i],grade[i]);
	}
}