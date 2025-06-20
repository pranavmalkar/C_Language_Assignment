#include<stdio.h>

int main(){

    int n,rem;

    printf("\n Enter the number ");
    scanf("\n %d",&n);

    while(n>0)
    {
        rem= n%10;
        printf(" %d",rem);
        n=n/10;
    }
}