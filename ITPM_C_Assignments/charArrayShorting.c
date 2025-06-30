#include<stdio.h>
int main()
{
    char arr[20]="pranav";
    char temp;
    for (int i = 0; i < arr[i]!=0; i++)
    {
       for (int j = i+1; i < arr[j]!=0; j++)
       {
           if(arr[i]>arr[j])
           {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
           }
       }
       
    }
    printf("\n character array after sorting is :");
    for (int i = 0; i < arr[i]!=0; i++)
    {
        printf("%c ",arr[i]);
    }
    
    
    return 0;
}