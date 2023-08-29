#include<stdio.h>
int result()
{
	int eng,sci,total;
	float per;
	printf("Enter eng,sci:");
	scanf("%d%d",&eng,&sci);
	printf("\neng\tsci\ttotal\tper\tgrade\n");
	total=eng+sci;
	//printf("Total=");
	per=total/2;
	
	printf("%d\t%d\t%d\t%.2f\t",eng,sci,total,per);
	
	if(eng<40 || sci<40)
	printf("fail");
	
	else if(per>=75)
	printf("A");

	else if(per>=60)
	printf("B");
	
	else if(per>=45)	
	printf("C");
	printf("\n");
}
	int main()
	{
	result();
	}