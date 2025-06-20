#include <stdio.h>
int main()
{
    int n, rem, original, temp = 0;
    printf("\n Enter the number ");
    scanf("%d", &n);
    original = n;

    while (n > 0)
    {
        rem = n % 10;
        temp = temp * 10 + rem;
        n = n / 10;
    }

    if (original == temp)
    {
        printf("\n This number is Palandrom");
    }
    else
    {
        printf("\n This number is not Palandrom");
    }
}
