#include<stdio.h>
int a,b;
int *p1=&a;
int *p2=&b;

void additon();
void substraction();
void multiplication();
void division();
int main()
{
   
    int choice;
    printf("\n Enter the two numbers for opration :");
    scanf("\n %d\n %d",p1,p2);
    do
    {
        
        printf("\n -------------menu--------------\n");
        printf("\n 1 for addition ");
        printf("\n 2 for substraction ");
        printf("\n 3 for multiplication ");
        printf("\n 4 for division ");
        scanf("\n %d",&choice);

        switch (choice)
        {
        case 1:additon(); break;
        case 2:substraction(); break;
        case 3:multiplication(); break;
        case 4:division(); break;
        default:
            printf("\n Invalid choice..");
            break;
        }
    } while (choice!=0);
    printf("\n Thanks for visiting.....Program Ended.........!\n");
    return 0;
    

}

void additon(){
    int result=*p1 + *p2;
    printf("\n The addition of %d + %d is %d",*p1,*p2,result);
}
void substraction(){
    int result=*p1 - *p2;
    printf("\n The substraction of %d - %d is %d",*p1,*p2,result);
}
void multiplication(){
    int result=*p1 * *p2;
    printf("\n The multiplication of %d * %d is %d",*p1,*p2,result);
}
void division(){
    int result=*p1 / *p2;
    printf("\n The division of %d / %d is %d",*p1,*p2,result);
}