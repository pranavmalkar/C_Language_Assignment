#include<stdio.h>
int main()
{
    char arr[20]="AbCdEfGhIj";
    for (int i = 0; i < arr[i]!=0; i++)
    {
        if(arr[i]>=65 && arr[i]<=90)
        {
            printf("%c",arr[i]+32);
        }
        else
        {
             printf("%c",arr[i]-32);
        }
    }
    
    return 0;
}