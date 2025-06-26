#include<stdio.h>
int main()
{
    int size  ;
    printf("\n Enter the size of array : = ");
    scanf("%d", &size);

    int arr[size];
    printf("\n Enter the value of array : = ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int temp;
    for (int  i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {

            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
}