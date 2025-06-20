#include<stdio.h>

int main(){

    int choice_num;

    printf("Choose a number\n 1 area of circle \n 2 area of rectangle \n 3 area of square \n");
    scanf("%d",&choice_num);

    if(choice_num == 1){
        float radius;

        printf("Enter a radius :");
        scanf("%f",&radius);

        float area_of_circle = 3.14 * radius * radius;

        printf("area of circle is :%f",area_of_circle);
    }
    else if (choice_num == 2){
        float length,width;

        printf("Enter length and width :");
        scanf("%f%f",&length,&width);

        float area_of_rectangle = length * width;

        printf("area of rectangle is :%f",area_of_rectangle);
    }
    else if (choice_num == 3){
        float side;

        printf("Enter a side :");
        scanf("%f",&side);

        float area_of_square = side * side;

        printf("area of square is :%f",area_of_square);
    }
    else{
        printf("Invalid number...!");
    }

}