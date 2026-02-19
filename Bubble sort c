#include<stdio.h>
int main()
{
    int i,j,n,temp,array[100];
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("sorted elements in ascending order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
    return 0;
}
