#include<stdio.h>
int main()
{
    int num;
    printf("\n Enter the number ");
    scanf("%d",&num);

    switch (num % 2)
    {
        case 0:
             printf("Number is even");
        break;

        case 1:
            printf("Number is odd");
        break;

        default:
             printf("invalid number");
    }
}