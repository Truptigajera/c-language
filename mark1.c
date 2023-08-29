 #include<stdio.h>
void main()
{
	int grade[5],per[5],total[5],guj[5],eng[5],sci[5],i;
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

	printf("\neng\tsci\tguj\ttotal\tper\tgrade\n");
	
	for(i=0;i<5;i++)
	{
	total[i]=guj[i]+eng[i]+sci[i];
	if(eng[i]||sci[i]||guj[i]<40)
	{
	printf("fail");
	}
	else
	{
	per[i]=total[i]/3;
	if(per[i]>=75)
	printf("A");
	else if(per[i]>=60)
	printf("B");
}

	
	printf("%d\t%d\t%d\t%d\t%d\t%d\n",guj[i],eng[i],sci[i],total[i],per[i],grade[i]);
	}
}