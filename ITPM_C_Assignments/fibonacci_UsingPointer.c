#include<stdio.h>
int main()
{
    int a=0,b=1,num,next;
    int *p1=&a;
    int *p2=&b;
    int *p3=&num;
    printf("\n Enter the number for series :");
    scanf("\n %d",p3);

    for(int i=1;i<=*p3;i++)
    {
        printf("%d",a);
        next=*p1+*p2;
        *p1=*p2;
        *p2=next;

    }



}