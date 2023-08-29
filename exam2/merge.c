#include<stdio.h>
int main()
{
	char a[20],b[20];
	int i,j;
	printf("enter 1 string:");
	gets(a);
	printf("enter 2 string");
	gets(b);
	
	i=0;
	while(a[i]!='\0')
	{i++;}

	j=0;
	while(b[j]!='\0')
	{
		a[i]=b[j];
		i++;
		j++;	
		}
	a[i]!='\0';
	printf("merge string is :%s",a);
}