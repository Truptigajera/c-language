#include<stdio.h>
void main()
{
  int a[5][5],i,j,sum=0,total=0,sum1=0;
  for(i=0;i<3;i++)
  {
 	for(j=0;j<3;j++)
	{
	printf("enter a[%d][%d]:",i,j);
	scanf("%d",&a[i][j]);
	}
  }
  for(i=0;i<3;i++)
  {
 	for(j=0;j<3;j++)
	{
	printf("%d ",a[i][j]);
	}
	printf("\n");
  }
  for(i=0;i<3;i++)
  {
 	for(j=0;j<3;j++)
	{
	if(a[i]==a[j])
	sum=sum+a[i][j];
	
	if(a[i]<a[j])
	sum1=sum1+a[i][j];
	
	if(a[i]>a[j])
	total=total+a[i][j];
	}
  }

	printf("\nTotal of diagonal:%d",sum);
	printf("\nTotal of upper triangle:%d",sum1);
	printf("\nTotal of lower triangle:%d",total);
}	
	

/*printf("\nTotal of diagonal:%d",sum);
  
  for(i=0;i<3;i++)
  {
 	for(j=0;j<3;j++)
	{	
	if(a[i]<a[j])
	sum1=sum1+a[i][j];
	}}
 	printf("\nTotal of upper triangle:%d",sum1);
  for(i=0;i<3;i++)
  {
 	for(j=0;j<3;j++)
	{
	if(a[i]>a[j])
	total=total+a[i][j];}
	}
	
	
	printf("\nTotal of lower triangle:%d",total);*/
  
	
  
