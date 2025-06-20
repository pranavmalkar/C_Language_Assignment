#include<stdio.h>
int main()
{
    int n,i,fact=1;

    printf("\n Enter the number");
    scanf("%d",&n);

    if(n<0)
    {
        printf("\n factorial number is possible for negative number ");
    }
    else{
        for(i=1; i<=n; i++)
        {
            fact=fact*i;
        }
        printf("\n %d", fact);
    }

}
