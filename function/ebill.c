#include<stdio.h>
float bill()
{
	float unit,bill,total;
	printf("Enter unit:");
	scanf("%f",&unit);
	if(unit<=100)
	bill=50+unit*0.60;
	else if(unit<=300)
	bill=50+60+(unit-100)*0.80;
	else if(unit>300)
	bill=50+60+160+(unit-300)*0.90;
	
	if(bill>300)
	{total=bill + bill*0.15;

	return total;}
	else
	{
	bill;
	return bill;}
}
	float main()
	{float x;
	x=bill();
	printf("bill is:%f",x);}
	