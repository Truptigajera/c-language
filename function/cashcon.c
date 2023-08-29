#include<stdio.h>
void convert()
{
	int i,amt,notes;
	int a[]={2000,500,200,100,50,20,10,1};
	printf("amt:");
	scanf("%d",&amt);
	printf("\n");
	
	for(i=0;i<8;i++)
	{
	notes=amt/a[i];
	
	if(notes)
	{amt=amt%a[i];
	printf("%d X %d = %d \n",a[i],notes,a[i]*notes);}
	}
}
	int main()
{convert();}