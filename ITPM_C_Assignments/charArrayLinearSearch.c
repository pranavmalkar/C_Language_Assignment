#include<stdio.h>
int main()
{
    char arr[20]="Pranav";
    char ch;
    printf("\n Enter the character for search in string :");
    scanf("%c",&ch);
    int count=0;
    for (int i = 0; i < arr[i]!=0; i++)
    {
        
        if(arr[i]==ch)
        {
            printf("\n%c is found at position %d",ch,i+1);
            count=1;
            break;
        }
    }
    if(count<=0)
    {
        printf("\n%c is not found",ch);
    }
    return 0;
}