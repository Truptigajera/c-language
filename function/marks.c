#include<stdio.h>
void passornot()
{
	int a;
	printf("enter marks:");
	scanf("%d",&a);
	if(a>=40)
	printf("\npass\n");
	else
	printf("\nfail\n");

}
	int main()
	{
	printf("hi\n");
	passornot();
	passornot();
	passornot();
	}