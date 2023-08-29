//global variable
#include<stdio.h>
int m,s,e,t;
float per;
void dis()
{
	printf("maths marks:%d\n",m);
	printf("sci marks:%d\n",s);	
	printf("eng marks:%d\n",e);
	printf("total marks:%d\n",t);
	printf("percentage:%.2f\n",per);
}
void calc()
{
	t=m+s+e;
	per=(float)t/3;
	dis();
}
void setdata()
{
	printf("enter maths mark: ");
	scanf("%d",&m);
	printf("enter sci mark: ");
	scanf("%d",&s);
	printf("enter eng mark: ");
	scanf("%d",&e);
	calc();
}
	int main()
{
	setdata();
}