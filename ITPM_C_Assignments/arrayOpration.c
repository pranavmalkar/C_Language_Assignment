#include <stdio.h>
int main()
{
    int size , sum = 0 ;
    printf("\n Enter the numbers of marks : = ");
    scanf("%d", &size);

    int arr[size];
    printf("\n Enter the value of array : = ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n The value of array are : = ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  , ", arr[i]);
    }

    
    printf("\n The values from array are : = ");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d  , ", arr[i]);
            sum += arr[i];
        }
    }

    printf("\n The Sum of Even NUmbers from array is : = %d ",sum);
    return 0;
}