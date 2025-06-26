#include<stdio.h>
int main()
{
    int range;
    printf("\n Enter the range for serise :");
    scanf("%d",&range);

    int arr[range];
    printf("\n elements of array as fibonacci series :");
    int next,first=0,second=1;
    arr[0]=first;
    arr[1]=second;
     
    for (int i = 0; i < range; i++)
    {
        printf(" %d ",first);
        next=first+second;
        first=second;
        second=next;
    }
    
}