int main()
{
    int num = 15;

    for (int i = 1; i <= num; i++) 
    {
        for (int j = 1; j <= num - i; j++) 
        {
            printf("  ");
        }
        for (int k = 1; k <= i * 2 - 1; k++) 
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i <= num - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  "); 
        }
        for (int k = 1; k <= (num - i) * 2 - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}