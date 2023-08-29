#include<stdio.h>
#include<conio.h>
void main()
{
	float total,salary,hra,da;
	clrscr();
	printf("salary:");
	scanf("%f",&salary);
	if(salary<=5000)
	{
	hra=salary*0.08;
	da=salary*0.20;
	}
	else if(salary<=10000)
	{
	hra=salary*0.12;
	da=salary*0.30;
	}
	else if(salary<=15000)
	{
	hra=salary*0.15;
	da=salary*0.40;
	}
	else if(salary>15000)
	{
	hra=salary*0.20;
	da=salary*0.50;
	}
	total=salary+hra+da;
	printf("Total gross salary is:%f",total);
	getch();
}