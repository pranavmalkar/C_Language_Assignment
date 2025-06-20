#include<stdio.h>
int main()
{
    int k=0;
    char ch='A';
    for(int i=1; i<=9; i++)
    {
        if(i<=5)
        {
            k++;
        }
        else{
            k--;
        }
        for(int j=1; j<=9; j++)
        {
            if(j>=6-k && j<=4+k)
            {
                printf("%c ",ch);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        ch++;
    }
}