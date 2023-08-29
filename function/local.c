//local variable
#include<stdio.h>
void dis(int m,int s,int e,int t,float p)
{
	printf("maths mark:%d ",m);
	printf("eng mark:%d ",e);
	printf("Sci mark:%d ",s);
	printf("Total marks:%d ",t);
	printf("percentage:%.2f",p);
}
void calc(int m,int s,int e)
{
	int t;
	float p;
	t=m+s+e;
	p=(float)t/3;
	dis(m,s,e,t,p);
}
void setdata()
{
	int m,s,e;
	printf("Maths marks:");
	scanf("%d",&m);
	printf("eng marks:");
	scanf("%d",&e);
	printf("sci marks:");
	scanf("%d",&s);
	calc(m,s,e);
}
	int main()
	{
	setdata();
	}

