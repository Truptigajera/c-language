#include<stdio.h>
#define n 5
int dis(int a[])
{
	int max,min;
	max=min=a[0];
	for(int i=0;i<n;i++)
{
	if(min>a[i])
	min=a[i];

	if(max<a[i])
	max=a[i];
}
	printf("max:%d",max);
	printf("\nmin:%d",min);
}
int main()
{
	int arr[n],i;
	for(i=0;i<n;i++){
	printf("enter val:");
	scanf("%d",&arr[i]);
	}
	dis (arr);
}