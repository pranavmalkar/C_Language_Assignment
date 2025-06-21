#include<stdio.h>
void areaOfCircle(int *);
void areaofSquare(int *);
void areaOfReactangle(int *,int *);
int main()
{
    int choice,radius,side,length,width;
    do
    {
        printf("\n--------Menu--------\n");
        printf("\n 1 for area of circle");
        printf("\n 2 for area of square");
        printf("\n 3 for area of reactangle");
        scanf("\n %d",&choice);

        switch (choice)
        {
        case 1:
            printf("\n Enter the radius");
            scanf("\n %d",&radius);
            areaOfCircle(&radius);
            break;
        case 2:
            printf("\n Enter the side");
            scanf("\n %d",&side);
            areaofSquare(&side);
            break;
        case 3:
            printf("\n Enter the length");
            scanf("\n %d",&length);
            printf("\n Enter the width");
            scanf("\n %d",&width);
            areaOfReactangle(&length,&width);
            break;
        
        default:
            printf("Invalid choice.....!");
            break;
        }
    } while (choice!=0);
    printf("\n Thanks for Visiting......!\n");
    
    return 0;
}
void areaOfCircle(int *radius)
{
    int result=3.14 * *radius * *radius;
    printf("\n area of circle is %d",result);
}
void areaofSquare(int *side)
{
    int result=*side * *side;
    printf("\n area of square is %d",result);
}
void areaOfReactangle(int *length,int *width)
{
    int result=*length  * *width;
    printf("\n area of reactamgle is %d",result);
}