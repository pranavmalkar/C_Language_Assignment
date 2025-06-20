#include <stdio.h>

int main()
{

    int num, count = 0;

    printf("Please enter a number :");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 0)
    {
        printf("%d is a Prime Number", num);
    }
    else {
        printf("%d is a not Prime Number", num);

    }
    
    
    
}