#include<stdio.h>
#include<conio.h>
int main()
{
int a1=9,a2=4,a3=2,a4=12,A;//9*4/2+12
int b1=123,b2=11,b3=2,B;	//123/11*2
int c1=11,c2=11,c3=8,c4=10,C;	//11*11-8/10
int d1=8,d2=6,d3=76,d4=3,D;	//8*6+76/3
int e1=10,e2=13,e3=27,e4=12,E;	//10*13+27*12
int f1=6,f2=9,f3=45,f4=5,F;	//6*9+45/5
int g1=8,g2=30,g3=7,g4=6,G;	//8+30*7/6
int h1=6,h2=2,h3=6,h4=12,H;	//6+2/6*12
int i1=70,i2=55,i3=63,i4=40,I;	//70-55+63-40
int j1=21,j2=72,j3=31,j4=10,J;	//21+72/31-10

clrscr();

A=a1*a2/a3+a4;	printf("1.%d",A);
B=b1/b2*b3;	printf("\n2.%d",B);
C=c1*c2-c3/c4;	printf("\n3.%d",C);
D=d1*d2+d3/d4;	printf("\n4.%d",D);
E=e1*e2+e3*e4;	printf("\n5.%d",E);
F=f1*f2+f3/f4;	printf("\n6.%d",F);
G=g1+g2*g3/g4;	printf("\n7.%d",G);
H=h1*h2/h3*h4;	printf("\n8.%d",H);
I=i1-i2+i3-i4;	printf("\n9.%d",I);
J=j1+j2/j3-j4;	printf("\n10.%d",J);
getch();
}