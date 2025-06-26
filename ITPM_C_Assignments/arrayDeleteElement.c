#include<stdio.h>
int main()
{
    int size;
    printf("\n Enter the size for array :");
    scanf("%d",&size);
    int arr[size];

    printf("\n Enter the values for array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\n array before deletation :");
    for (int i = 0; i < size; i++)
    {
       printf(" %d ",arr[i]);
    }
    
    int index;
    
    printf("\n Enter the index for delete :");
    scanf("%d",&index);
    index--;

    

    for (int i = 0; i < size; i++)
    {
        if(i==index)
        {
            arr[i]=arr[i+1];
            index++;
        }
    }
    size--;

    printf("\n array after delete element :");
    for (int i = 0; i < size; i++)
    {
       printf(" %d ",arr[i]);
    }

    
    
    return 0;

}