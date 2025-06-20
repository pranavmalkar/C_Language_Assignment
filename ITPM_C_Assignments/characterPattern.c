#include<stdio.h>
int main()
{
    
    int num = 5;
    char ch='A';

    for (int i = 1; i <= num; i++) 
    {
        for (int j = 1; j <= num - i; j++) 
        {
            printf("  ");
        }
        for (int k = 1; k <= i * 2 - 1; k++) 
        {
            printf("%c ",ch);
           
        }
        printf("\n");
         ch++;
    }
    for (int i = 1; i <= num - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  "); 
        }
        for (int k = 1; k <= (num - i) * 2 - 1; k++)
        {
            printf("%c ",ch);
        }
        printf("\n");
        ch++;
    }
}