#include<stdio.h>
int main ()
{
    int n,first=0,second=1,next,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d",first);
        next=first+second;
        first=second;
        second=next;
    }
}
