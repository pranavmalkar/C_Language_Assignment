#include<stdio.h>
int main()
{
    int num = 5;
    int print_num=1;

    for (int i = 1; i <= num; i++) 
    {
        for (int j = 1; j <= num - i; j++) 
        {
            printf("  ");
        }
        for (int k = 1; k <= i * 2 - 1; k++) 
        {
            printf("%d ",print_num);
            
        }
        printf("\n");
        print_num++;
        
    }
    for (int i = 1; i <= num - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  "); 
        }
        for (int k = 1; k <= (num - i) * 2 - 1; k++)
        {
            printf("%d ",print_num);
        }
        printf("\n");
        print_num++;
    }
    return 0;
}