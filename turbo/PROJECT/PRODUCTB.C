#include<stdio.h>
#include<conio.h>
void main()
{
float rate,qty,amt,dis,billamt,gst,netbill;
clrscr();
printf("enter rate,qty:");
scanf("%f%f",&rate,&qty);
amt=rate*qty;
dis=amt*0.05;
billamt=amt-dis;
gst=billamt*0.18;
netbill=billamt+gst;
printf("rate\tqty\tamt\t         dis\tbillamt\t    gst\tnetbill:");
printf("\n%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f/",rate,qty,amt,dis,billamt,gst,netbill);
getch();
}