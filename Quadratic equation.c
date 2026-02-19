#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,disc,root1,root2;
    printf("enter the value of coefficient a:");
    scanf("%f",&a);
    printf("enter the value of coefficient b:");
    scanf("%f",&b);
    printf("enter the value of coefficient c:");
    scanf("%f",&c);
    if (a==0)
    {
        printf("coefficient of a must be non zero");
        return 0;
    }
    disc=b*b-4*a*c;
    if(disc==0)
    {
        root1=root2=-b/(2*a);
        printf("roots are real and equal:%.2f%.2f",root1,root2);
    }
    else if (disc>0)
    {
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("roots are real and distinct:%.2f%.2f",root1,root2);
    }
    else
    {
        root1=-b/(2*a);
        root2=sqrt(fabs(-disc))/(2*a);
        printf("roots are imaginary:%.2f+i%.2f and %.2f-i%.2f",root1, root2,root1, root2);
    }
    return 0; 
}
