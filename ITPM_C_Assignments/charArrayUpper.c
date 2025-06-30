#include<stdio.h>
int main()
{
    char arr[20]="Pranav";
    printf("\n Array is :");
    for (int i = 0; i < arr[i] != 0; i++)
    {
        printf(" %c",arr[i]);
    }

    printf("\n---------------");
    printf("\n Array in string format : %s",arr);

    printf("\n---------------\n");
    for (int i = 0; i < arr[i]!=0; i++)
    {
        if(arr[i]>=97 && arr[i]<=122)
        {
            printf("%c",arr[i]-32);
        }
        else
        {
            printf("%c",arr[i]);
        }
    }
    


    
    
    return 0;
}