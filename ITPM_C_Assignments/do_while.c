#include<stdio.h>
int main()
{
    int sum=0,n;

    do
    {
        printf("\n Enter the value for sum");
        scanf("%d",&n);

        sum=sum+n;
        
    } while (n!=0);
    printf("\n %d", sum);

    printf("\n End of program");
    
}