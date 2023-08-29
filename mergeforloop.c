#include<stdio.h>
int main()
{

    char a[20], b[20];
    int i,j;
    printf("1 string is:");
    gets(a);
    printf("2 string is:");
    gets(b);

    for(i=0;a[i]!='\0';i++);
    
        for(j=0;b[j]!='\0';i++,j++)
        
        {
            
            a[i]=b[j];
            
            
        }
    
        a[i]='\0';
        printf("merge string is:%s",a);
    
}