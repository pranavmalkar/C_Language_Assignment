#include<stdio.h>
struct product
{
   int product_id;
   char product_name[20];
   int actual_price;
   int selling_price;
   
};
struct product accept(struct product );
void display(struct product);
int profit(struct product);
int loss(struct product);

int main()
{
    int choice,ans;
    struct product p1={101,"pen",10,20};
    
    do
    {

        printf("\n-------------Menu-------------\n");
        printf("\n1 for accepting values :");
        printf("\n2 for showing details :");
        printf("\n3 for showing profit :");
        printf("\n4 for showing loss :");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            p1= accept(p1);
            break;
        case 2:
            display(p1);
            break;
        case 3:
            ans=profit(p1);
            if(ans>0)
            printf("\n The profit is %d",ans);
            else
            printf("\n There is no profit");
            break;
        case 4:
            ans=loss(p1);
            if(ans>0)
            printf("\n The loss is %d",ans);
            else
            printf("\n There is no loss");
            break;
        
        default:
            printf("\nInvalid Choice...!");
            break;
        }
        
    } while (choice!=0);
    printf("\nThanks for visiting ......!");
    
}

struct product accept(struct product p1)
{
    printf("\n Enter  the deatails of product ");
    printf("\n Enter product id :");
    scanf("%d",&p1.product_id);
    printf("\n Enter product name :");
    scanf("%s",&p1.product_name);
    printf("\n Enter product actual price :");
    scanf("%d",&p1.actual_price);
    printf("\n Enter product selling price :");
    scanf("%d",&p1.selling_price);
    return p1;

}
void display(struct product p1)
{
    printf("\n Showing the deatails of product ");
    printf("\n the product id is %d",p1.product_id);
    printf("\n the product name is %s",p1.product_name);
    printf("\n the product actual price is %d",p1.actual_price);
    printf("\n the product selling price  is %d",p1.selling_price);

}

int profit(struct product p1)
{
    if(p1.selling_price > p1.actual_price)
    {
        return p1.selling_price-p1.actual_price;
    }
    else{
        return -1;
    }
}
int loss(struct product p1)
{
    if(p1.actual_price > p1.selling_price)
    {
        return p1.actual_price-p1.selling_price;
    }
    else{
        return -1;
    }
}
