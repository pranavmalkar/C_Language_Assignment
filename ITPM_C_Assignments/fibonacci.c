#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,next;
    printf("\n Enter the number");
    scanf("%d",&n);

    for(i=0; i<n;i++)
    {
        printf("\n %d",a);
        next=a+b;
        a=b;
        b=next;
    }
    return 0;


}