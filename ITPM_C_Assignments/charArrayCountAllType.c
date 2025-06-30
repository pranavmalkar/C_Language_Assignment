#include<stdio.h>
int main()
{
    char arr[30]="Pranav@#$1234";
    int count=0;
    for (int i = 0; i < arr[i]!=0; i++)
    {
        if (arr[i]>=65 && arr[i]<=90)
        {
            count++;
        }
        
    }
    printf("\nUpper Case characters in string is : %d",count);
    printf("\n---------------------");
    count=0;
    
    for (int i = 0; i < arr[i]!=0; i++)
    {
        if (arr[i]>=97 && arr[i]<=122)
        {
            count++;
        }
        
    }
    printf("\nLower Case characters in string is : %d",count);
    printf("\n---------------------");
    count=0;

    for (int i = 0; i < arr[i]!=0; i++)
    {
        if ((arr[i]>=32 && arr[i]<=41)||(arr[i]>=123 && arr[i]<=127)||arr[i]==64)
        {
            count++;
        }
        
    }
    printf("\nSpecial characters in string is : %d",count);
    printf("\n---------------------");
    count=0;

    for (int i = 0; i < arr[i]!=0; i++)
    {
        if (arr[i]>=48 && arr[i]<=57)
        {
            count++;
        }
        
    }
    printf("\nNumbers in string is : %d",count);
    return 0;
}