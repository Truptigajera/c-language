#include<stdio.h>
float tax()
{
	float income,tax,total;
	printf("Enter income:");
	scanf("%f",&income);
	
	if(income<=2500)
	tax=income*0;

	else if(income<=5000)
	tax=0+(income-2500)*0.10;
		
	else if(income<=10000)
	tax=0+250+(income-5000)*0.20;
	
	else if(income>10000)
	tax=0+250+1000+(income-10000)*0.30;

	return tax;
}
	float main()
	{
	float x;
	x=tax();
	printf("payable tax is:%f",x);
	}