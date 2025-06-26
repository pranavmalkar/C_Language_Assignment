#include<stdio.h>
int main()
{
     int size , max = 0,min ;
    printf("\n Enter the numbers of size : = ");
    scanf("%d", &size);

    int arr[size];
    printf("\n Enter the value of array : = ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("\n maximum value of array is %d ",max);
    
    
     for (int i = 0; i < size; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("\n minimum value of array is %d ",min);
    

    
}