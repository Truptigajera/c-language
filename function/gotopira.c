#include<stdio.h>

int main()
{
    int i=1,j=1;
	   
hello:
    
    if(i<=5){
	if(j<=i){
        printf("%d",i);
	j++;}
	
	printf("\n");
	i++;}
        goto hello;
 }
