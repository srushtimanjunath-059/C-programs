#include<stdio.h>
int main()
{
    int a[50],n,key,l=0,h,m,i,found=0;
    printf("enter number of students:");
    scanf("%d",&n);
    printf("enter students ID in ascending order:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter ID to search:");
    scanf("%d",&key);
    while(1<=h)
    {
        m=(l+h)/2;
        if(a[m]==key)
        {
            found=1;
            break;
        }
        else if (a[m]<key)
        {
            l=m+1;
        }
    }
    if(found==1)
    {
        printf("student registered\n");
    }
    else
    {
        printf("stude not registered\n");
    }
    return 0;
}
