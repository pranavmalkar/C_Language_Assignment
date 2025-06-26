#include<stdio.h>
int main()
{
    int size;
    printf("\n Enter the size for array :");
    scanf("%d",&size);
    int arr[size+1];

    printf("\n Enter the values for array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\n array before insert :");
    for (int i = 0; i < size; i++)
    {
       printf(" %d ",arr[i]);
    }
    
    int index,element;
    size++;
    printf("\n Enter the index for insert :");
    scanf("%d",&index);
    index--;

    printf("\n Enter the element for insertion :");
    scanf("%d",&element);

    for (int i = size; i >= 0; i--)
    {
        if(i>index)
        {
            arr[i]=arr[i-1];
        }
    }
    arr[index]=element;

    printf("\n array after insert :");
    for (int i = 0; i < size; i++)
    {
       printf(" %d ",arr[i]);
    }

    
    
    return 0;

}