#include<stdio.h>
float salary()
{
	float salary, hra, da,gross;
	printf("Enter salary:");
	scanf("%f",&salary);
	if(salary<=5000)
	{hra=salary*0.8;
	da=salary*0.20;}
	
	else if(salary<=10000)
	{hra=salary*0.12;
	da=salary*0.30;}

	else if(salary<=15000)
	{hra=salary*0.15;
	da=salary*0.40;}

	else if(salary>15000)
	{hra=salary*0.20;
	da=salary*0.50;}
	
	gross=salary+da+hra;
	return gross;
}
	float main()
	{float x;
	x=salary();
	printf("gross salary is:%f",x);}