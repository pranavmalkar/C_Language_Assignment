#include<stdio.h>
int main(){
    int menu_num;
    int category_num;
    int item_num;

    printf("-------- Welcome to McDonald`s --------\nWhat would you like to order...! \n 1 Burger \n 2 Drink \n 3 Pizza \n");
    scanf("%d",&menu_num);

    switch(menu_num){
        case 1: //Burger

            printf("Select category... \n 1 Veg \n 2 Non-veg \n");
            scanf("%d",&category_num);

            switch(category_num){
                case 1: //Veg
                    printf("Select a item... \n 1 Aloo tikki burger \n 2 McVeggie burger \n");
                    scanf("%d",&item_num);

                    switch(item_num){
                        case 1: printf("Your order is Aloo tikki burger...!");
                        break;
                        case 2: printf("Your order is McVeggie burger...!");
                        break;
                        default: printf("Invalid...!");
                    }
                break;
                case 2: //Non-veg
                    printf("Select a item... \n 1 McChicken burger \n 2 Mexican chicken burger \n");
                    scanf("%d",&item_num);

                    switch(item_num){
                        case 1: printf("Your order is McChicken burger...!");
                        break;
                        case 2: printf("Your order is Mexican chicken burger...!");
                        break;
                        default: printf("Invalid");
                    }
                break;
                default:
                    printf("Invalid...!");
            }
        break;
        case 2: //Drink
            printf("Select category... \n 1 Juice \n 2 Cold drink \n");
            scanf("%d",&category_num);

            switch(category_num){
                case 1: //Juice
                    printf("Select a item... \n 1 Mango juice \n 2 Watermelon Juice \n");
                    scanf("%d",&item_num);

                    switch(item_num){
                        case 1: printf("Your order is Mango juice...!");
                        break;
                        case 2: printf("Your order is Watermelon Juice...!");
                        break;
                        default: printf("Invalid...!");
                    }
                break;
                case 2: //Cold drink
                    printf("Select a item... \n 1 Coke \n 2 Pepsi \n");
                    scanf("%d",&item_num);

                    switch(item_num){
                        case 1: printf("Your order is Coke...!");
                        break;
                        case 2: printf("Your order is Pepsi...!");
                        break;
                        default: printf("Invalid");
                    }
                break;
                default:
                    printf("Invalid...!");
            }
        break;
        case 3: //Pizza
            printf("Select category... \n 1 Veg \n 2 Non-veg \n");
            scanf("%d",&category_num);

            switch(category_num){
                case 1: //Veg
                    printf("Select a item... \n 1 Margarita pizza \n 2 Volcano pizza \n");
                    scanf("%d",&item_num);

                    switch(item_num){
                        case 1: printf("Your order is Margarita pizza...!");
                        break;
                        case 2: printf("Your order is Volcano pizza...!");
                        break;
                        default: printf("Invalid...!");
                    }
                break;
                case 2: //Non-veg
                    printf("Select a item... \n 1 BBQ chicken pizza \n 2 Chicken cheese burst pizza \n");
                    scanf("%d",&item_num);

                    switch(item_num){
                        case 1: printf("Your order is BBQ chicken pizza...!");
                        break;
                        case 2: printf("Your order is Chicken cheese burst pizza...!");
                        break;
                        default: printf("Invalid");
                    }
                break;
                default:
                    printf("Invalid...!");
            }
        break;
        default:
            printf("Invalid...!");
    }
    printf("\nThank you visit again...!");
}