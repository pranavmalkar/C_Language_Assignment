#include<stdio.h>
void calProfit(int *,int *);
void calLoss(int *,int *);
int main()
{
    int choice,selling_price,actual_price;
    printf("\n Enter the actual price ");
    scanf("\n %d",&actual_price);
    printf("\n Enter the selling price ");
    scanf("\n %d",&selling_price);
    do
    {
        
        printf("\n--------Menu--------\n");
        printf("\n 1 for calculate profit ");
        printf("\n 2 for calculate loss ");
        scanf("\n %d",&choice);

        switch (choice)
        {
        case 1:calProfit(&actual_price,&selling_price);break;
        case 2:calLoss(&actual_price,&selling_price);break;
        default:
            printf("\n Invalid choice.....!");
            break;
        }
    } while (choice!=0);
    printf("\n Thanks for visiting....");
    
    return 0;
}
void calProfit(int *ap,int *sp)
{
    if(*sp > *ap)
    {
        printf("\n The profit is %d",*sp -*ap);
    }
    else{
        printf("\n There is no profit..!");
    }
}
void calLoss(int *ap,int *sp)
{
    if(*ap > *sp)
    {
        printf("\n The loss is %d",*ap -*sp);
    }
    else{
        printf("\n There is no loss..!");
    }

}