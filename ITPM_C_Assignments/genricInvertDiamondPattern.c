#include<stdio.h>
int main()
{
    int num,k=0;
    printf("\n Enter the odd number only ");
    scanf("\n %d",&num);
     int a=(num/2)+1;

    for(int i=1;i<=num;i++)
    {
       if(i<=a)
        k++;
        else
        k--;
        for(int j=1;j<=num;j++)
        {
            if(j>=k && j<=(num+1)-k)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
           
        }
        printf("\n");
        

    }
    return 0;
}