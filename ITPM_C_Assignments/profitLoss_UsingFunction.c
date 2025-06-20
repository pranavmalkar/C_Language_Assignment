#include<stdio.h>
void profitLoss();
int main()
{
    profitLoss();
    return 0;
}
void profitLoss()
{
    
    int actual_price, selling_price, profit, loss;
    printf("Enter Actual Price = ");
    scanf("%d",&actual_price);

    printf("Enter Selling Price = ");
    scanf("%d",&selling_price);

    if(selling_price > actual_price)
    {
        profit = selling_price - actual_price;
        printf("\n Profit = %d",profit);
    }
    else
    {
        loss = selling_price - actual_price;
        printf("\n Loss = %d", loss);
    }
}