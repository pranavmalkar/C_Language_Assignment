#include <stdio.h>
int main()
{
    int choice, age, num, a, b;
    printf("\n ------------- Menu --------------- ");
    printf("\n 1 : Age Validation ");
    printf("\n 2 : Greate Among 2 Numbers ");
    printf("\n 3 : Even Or Odd Number ");
    printf("\n 4 : Number is +ve or -ve ");

    printf("\n What is Your Order : = ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n Enter the Age of the perosn : = ");
        scanf("%d", &age);
        if (age > 18 && age <= 90)
        {
            printf("\n Valid for vote ..! ");
        }
        else if (age > 0 && age <= 18)
        {
            printf("\n INvalid for vote ...! ");
        }
        else
        {
            printf("\n Not Exixst ...! ");
        }
        break;
    case 2:
        printf("\n Enter the value of a and b : = ");
        scanf("%d%d", &a, &b);

        if (a > b)
        {
            printf("\n a = %d is greater than b = %d ", a, b);
        }
        else
        {
            printf("\n b = %d is greater than a = %d ", b, a);
        }

        break;
    case 3:
        printf("\n Enter the number : = ");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            printf("\n num = %d is Even ", num);
        }
        else
        {
            printf("\n num = %d is Odd ", num);
        }
        break;
    case 4:
        printf("\n Enter the number : = ");
        scanf("%d", &num);
        if (num > 0)
        {
            printf("\n num = %d is +ve Number  ", num);
        }
        else
        {
            printf("\n num = %d is -ve Number  ", num);
        }
        break;
    default : printf("\n You have entred the wrong choice ...! ");
    }

    printf("\n Thank You visit Again ...! ");

    return 0;
}