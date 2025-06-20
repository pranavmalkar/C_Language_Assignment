#include<stdio.h>
int main()
{
    int choice, radius , length , width , side ;
    printf("\n --------------------  Menu --------------------- \n");
    printf("\n1: Area of Circle ");
    printf("\n2: Area of Rectangle ");
    printf("\n3: Area of Square ");

    printf("\n Which Operation You want to Perform : = ");
    scanf("%d", &choice);// 4

    switch (choice) // 4
    {
    case 1:
        printf("\n Enter The radius : = ");
        scanf("%d", &radius);
        printf("\n The Area of Circle is : = %f", 3.14 * radius * radius);
        break;
    case 2:
        printf("\n Enter the Length and Width : = ");
        scanf("%d%d",&length,&width);
        printf("\n The Area of Rectangle is : = %d ",length*width);
        break;
    case 3:
        printf("\n Enter The side : = ");
        scanf("%d", &side);
        printf("\n The Area of Square is : = %d", side * side);
        break;
    default:
        printf("\n Invalid choice ...! ");
    }

    printf("\n Thank You for Visiting ...! \n");

    return 0;
}