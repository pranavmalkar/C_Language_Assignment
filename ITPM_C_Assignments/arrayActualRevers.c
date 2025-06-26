#include<stdio.h>
int main()
{
    int size;
    printf("\n Enter the size of array :");
    scanf("%d",&size);

    int arr[size];
    printf("\n Enter the values for array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Array before revers :");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ",arr[i]);
    }

    printf("\n--------------------");
    printf("\n array after reverse :");
    int temp;
    for (int i = 0; i < size/2; i++)
    {
       temp=arr[i];
       arr[i]=arr[size-i-1];
       arr[size-i-1]=temp;
    }
    for (int i = 0; i < size; i++)
    {
      printf(" %d ",arr[i]);
    }
    
    
    
}