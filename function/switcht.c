#include<stdio.h>
int main(){
    int i,n;
    hello:
    printf("Enter n:");
    scanf("%d",&n);
    if(i<=n){
        printf("%d ",i);
        i++;
        goto hello;
    }
}