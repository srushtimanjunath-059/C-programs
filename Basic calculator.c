#include<stdio.h>
int main()
{
    char operator;
    double num1,num2,result;
    printf("enter an operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("enter two numbers:");
    scanf("%lf%lf",&num1,&num2);
    switch(operator)
    {
        case('+'):result=num1+num2;
        printf("result:%2lf+%2lf=%2lf\n",num1, num2, result);
        break;
        case('-'):result=num1-num2;
        printf("result:%2lf-%2lf=%2lf\n",num1, num2, result);
        break;
        case('*'):result=num1+num2;
        printf("result:%2lf*%2lf=%2lf\n",num1, num2, result);
        break;
        case('/'): if(num2!=0)
        {    
            result=num1/num2;
            printf("result:%2lf/%2lf=%2lf\n",num1, num2, result);
            break;
        }
        else
        {
            printf("error:divis by zero not allowed");
        }
        break;
        default:printf("error: invalid operator\n");
        break;
    }    
    return 0;
}
