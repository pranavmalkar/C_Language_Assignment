#include<stdio.h>
int main()
{
    int choice;

    do
    {
        printf("\n------------Menu----------------");
        printf("\n 1: Msg 1");
        printf("\n 2: Msg 2");
        printf("\n 3: Msg 3");
        printf("\n 4: Msg 4");

        printf("\n Enter your choice");
        scanf("\n %d",&choice);

        switch (choice)
        {
        case 1: 
            printf("\n This is msg 1....");
            break;
        
        case 2: 
            printf("\n This is msg 2....");
            break;

        case 3: 
            printf("\n This is msg 3....");
            break;

        case 4: 
            printf("\n This is msg 4....");
            break;
        
        default:
            printf("\n Invalid....");
            break;
        }







    } while (choice != 0);

    printf("\n This program is ended.....");
    return 0;
    
}