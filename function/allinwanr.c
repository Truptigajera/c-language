/*#include<stdio.h>   // wawr
int revers(int n,int r)
{
int t=0;
while(n>0)
	{
	r=n%10;
	t=t*10 + r;

	n/=10;	
	}
	return t;
}
	int main()
	{
	int num,r;
	printf("enter number:");
	scanf("%d",&num);

	r=revers(num);
	printf("The revers number is:%d",r);
	}*/





/*#include<stdio.h>   // wanr
int revers(int n,int r)
{
int t=0;
while(n>0)
	{
	r=n%10;
	t=t*10 + r;

	n/=10;	
	}
	printf("The revers number is:%d",t);
}
	int main()
	{
	int num;
	printf("enter number:");
	scanf("%d",&num);

	revers(num);
	
	}*/


/*#include<stdio.h>   // 
int perfect(int n)
{
int i=1,sum=0;
while(i>n)
{
	if(n%i==0)
	sum=sum+i;
	i++;
}
	if(sum==n)
	return 0;
	else
	return 1;
}
	int main()
	{
	int n,sum=0;
	printf("enter no:");
	scanf("%d",&n);

	if(perfect(n)==0)
	printf("%d id per no.",n);
	else
	printf("%d is not per no.",n);
	 
	}*/


#include<stdio.h>
int convert(int n)
{
int i=1,sum=0;
	while(i<n)
{
	if(n%i==0)
	sum=sum+i;
	i++;
}
	if(sum==n)
	return sum;
}

	int main()
	{
	int n,sum=0;
	printf("enter no:");
	scanf("%d",&n);

	if(sum==n)
	printf("%d is perfect no:",n);
	else
	printf("%d in not per.",n);
	}













