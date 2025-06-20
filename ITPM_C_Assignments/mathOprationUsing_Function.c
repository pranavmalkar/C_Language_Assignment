#include<stdio.h>

void addition();
void substraction();
void multiplication();
void divison();

int main()
{

    addition();
    substraction();
    multiplication();
    divison();
     
    return 0;
}
void addition()
{
    int a=10, b=20;
    

    printf("\n Addition of a+b is %d ",a+b);
}

void substraction()
{
     int a=10, b=20;
    

    printf("\n Substraction of a-b is %d ",a-b);
}

void multiplication()
{
    
     int a=10, b=20;
    

    printf("\n Multiplication of a*b is %d ",a*b);

}

void divison()
{
    int a=10, b=20;
    

    printf("\n Division of a/b is %d ",a/b);
}