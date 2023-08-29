// structure-> collection of variable different data types
#include<stdio.h>
struct student{
    int roll;
    char name[20];
    int m,s,e,t;
    float per;
};
    int main()
    {
        struct student a[5];
        int i;
        for(i=0;i<2;i++){
            printf("___________________________\n");
            printf("roll");
            scanf("%d",&a[i].roll);
            printf("Name");
            scanf("%s",&a[i].name);
            printf("Maths");
            scanf("%d",&a[i].m);
            printf("sci");
            scanf("%d",&a[i].s);
            printf("eng");
            scanf("%d",&a[i].e);
            printf("\n");
        }
        printf("Roll\tname\tmaths\tsci\teng\ttotal\tper\tgrade");
        printf("\n____________________________________________________");
        for(i=0;i<2;i++){
            a[i].t=a[i].m+a[i].s+a[i].e;
        if(a[i].m<40 ||a[i].s<40||a[i].e<40)
	printf("Fail");
	else if(a[i].per>=80)
	printf("A");
	else if(a[i].per>=60)
	printf("B");
	    a[i].per=(float)a[i].t/3;
	         
   printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",a[i].roll,a[i].name,a[i].m,a[i].s,a[i].e,a[i].t,a[i].per);
        }
    }