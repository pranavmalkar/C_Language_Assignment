#include<stdio.h>
int main()
{
    int arr[2][2]=
    {{2,3},{3,4}};
    int max=0;
    for ( int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 2; j++)
       {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
       }
       
    }
    printf("\n Maximun is %d ",max);

    int min;
    for ( int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 2; j++)
       {
            if(min>arr[i][j])
            {
                min=arr[i][j];
            }
       }
       
    }
    printf("\n minimum is %d ",min);
    
}