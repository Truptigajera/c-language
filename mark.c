 #include<stdio.h>
void main()
{
	int per[5],total[5],guj[5],eng[5],sci[5],i;
	for(i=0;i<5;i++)
	{
	printf("enter val eng[%d]:",i);
	scanf("%d",&eng[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
	printf("enter val sci[%d]:",i);
	scanf("%d",&sci[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
	printf("enter val guj[%d]:",i);
	scanf("%d",&guj[i]);
	}

	printf("\neng\tsci\tguj\ttotal\tper\n");
	
	for(i=0;i<5;i++)
	{
	total[i]=guj[i]+eng[i]+sci[i];
	per[i]=total[i]/3;
	printf("%d\t%d\t%d\t%d\t%d\n",guj[i],eng[i],sci[i],total[i],per[i]);
	}
}