#include<stdio.h>
void main()
{
	char str[20];
	printf("enter string:");
	gets(str);
	
	printf("your string is:%s",str);

	int i=0;
	while(str[i]!='\0')
	{
	i++;	
	}
	printf("\nstring length is:%d",i);
}