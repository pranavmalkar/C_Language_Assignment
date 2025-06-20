#include<stdio.h>

int main(){
    int menu_num;

    printf("Select a menu...\n 1 Burger \n 2 Drink \n 3 Pizza \n");
    scanf("%d",&menu_num);

    if(menu_num == 1){ 
        //Burger Menu
        int category_num;

        printf("Burger selected, select category...\n 1 veg \n 2 non-veg \n");
        scanf("%d",&category_num);

        if(category_num == 1){
            int item_num;

            printf("Veg burger selected, select item...\n 1 aloo tikki \n 2 cheese \n");
            scanf("%d",&item_num);

            if(item_num == 1){
                printf("Your order is Veg Aloo tikki burger.");
            }
            else if(item_num == 2){
                printf("Your order is Veg cheese burger.");
            }
            else {
                printf("Invalid...!");
            }
        }
        else if(category_num == 2){
            int item_num;

            printf("Non-veg burger selected, select item...\n 1 Mexican chicken \n 2 BBQ chiken \n");
            scanf("%d",&item_num);

            if(item_num == 1){
                printf("Your order is Mexican chicken burger.");
            }
            else if(item_num == 2){
                printf("Your order is BBQ chicken burger.");
            }
            else{
                printf("Invalid...!");
            }

        }
        else {
            printf("Invalid...!");
        }
    }
    else if(menu_num == 2){
        //Drink Menu
        int category_num;

        printf("Drink selected, select category...\n 1 Juice \n 2 Cold drink \n");
        scanf("%d",&category_num);
        
        if(category_num == 1){
            int item_num;

            printf("Juice drink selected, select item...\n 1 Mango juice \n 2 Straberry juice \n");
            scanf("%d",&item_num);

            if(item_num == 1){
                printf("Your order is Mango juice.");
            }
            else if(item_num == 2){
                printf("Your order is Straberry juice.");
            }
            else{
                printf("Invalid...!");
            }
        }
        else if (category_num == 2){
            int item_num;

            printf("Cold drink selected, select item...\n 1 Coke \n 2 Pepsi \n");
            scanf("%d",&item_num);

            if(item_num == 1){
                printf("Your order is Coke.");
            }
            else if(item_num == 2){
                printf("Your order is Pepsi.");
            }
            else{
                printf("Invalid...!");
            }
        }
        else{
            printf("Invalid...!");
        }
    }
    else if(menu_num == 3){
        //Pizza menu
        int category_num;

        printf("Pizza selected, select category...\n 1 veg \n 2 non-veg \n");
        scanf("%d",&category_num);

        if(category_num == 1){
            int item_num;

            printf("Veg Pizza selected, select item...\n 1 Margarita \n 2 Volcano \n");
            scanf("%d",&item_num);

            if(item_num == 1){
                printf("Your order is Margarita pizza.");
            }
            else if(item_num == 2){
                printf("Your order is Volcano pizza.");
            }
            else{
                printf("Invalid...!");
            }
        }
        else if(category_num == 2){
            int item_num;

            printf("Non-veg pizza selected, select item...\n 1 Chicken pizza \n 2 BBQ chiken pizza \n");
            scanf("%d",&item_num);

            if(item_num == 1){
                printf("Your order is Chicken pizza.");
            }
            else if(item_num == 2){
                printf("Your order is BBQ chicken pizza.");
            }
            else{
                printf("Invalid...!");
            }
        }
        else {
            printf("Invalid...!");
        }

    }
    else{
        printf("Invalid...!");
    }
}