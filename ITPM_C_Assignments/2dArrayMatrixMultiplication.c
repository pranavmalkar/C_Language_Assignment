#include<stdio.h>
int main()
{
    int arr[2][2] = {{1, 2},
                     {3, 4}};
    int brr[2][2] = {{5, 6},
                     {7, 8}};
    int crr[2][2] = {{0, 0},
                     {0, 0}}; 

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                crr[i][j]=crr[i][j]=(arr[i][k]*brr[k][j]);
            }
            
        }
        
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" | %d |",crr[i][j]);
        }
        printf("\n");
        
    }



}