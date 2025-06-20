#include<stdio.h>

void areaOfCircle();
void areaOfSquare();
void areaOfReactangle();




int main()
{
    int choice;
    printf("\n Enter your choice");
    printf("\n 1 for Area of Circle");
    printf("\n 2 for Area of Square");
    printf("\n 3 Area of Reactangle");
    scanf("\n %d", &choice);

    switch (choice)
    {
    case 1:
         areaOfCircle();
        break;
    
    case 2:
        areaOfSquare();
        break;

    case 3:
        areaOfReactangle();
        break;
    
    default:
        printf("\n Invalid choice");
        break;
    }


    return 0;
}

void areaOfCircle()
{       
    int radius;
    printf("\n Enter The radius : = ");
    scanf("%d", &radius);
    printf("\n The Area of Circle is : = %f", 3.14 * radius * radius);
}

void areaOfSquare()
{
    int side;
    printf("\n Enter The side : = ");
    scanf("%d", &side);
    printf("\n The Area of Square is : = %d", side * side);
}

void areaOfReactangle()
{
    int length,width;
    printf("\n Enter the Length and Width : = ");
    scanf("%d%d",&length,&width);
    printf("\n The Area of Rectangle is : = %d ",length*width);
}
