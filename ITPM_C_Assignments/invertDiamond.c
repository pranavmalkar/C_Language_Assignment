#include <stdio.h>
int main()
{
    int k = 0 ; 
    for (int i = 1; i <= 9  ; i++) // i = 6
    {    if (i <= 5 )
        {    k++;       }
        else
        {   k--;        }
        for (int j = 1; j <= 9; j++) // j = 6
        {
            if ( j >= k && j <= 10 - k  )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }


    return 0;
}