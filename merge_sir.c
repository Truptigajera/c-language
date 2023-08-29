#include<stdio.h>
void main()
{
	char a[20],b[20];
	int i,j;
	printf("string 1:");
	gets(a);
	printf("string 2:");
	gets(b);

	i=0;
	while(a[i]!='\0')
	{i++;}
	//printf("length is:%d",i);
	j=0;
	while(b[j]!='\0')
	{
		a[i]=b[j];
		i++;
		j++;
	}
	a[i]='\0';
	printf("merge string is:%s",a);
}