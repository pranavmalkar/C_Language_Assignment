#include<stdio.h>

int main(){
int n;
printf("enter the value of n\n");
scanf("%d",&n);
printf("the sum of square of n natural numbers is %d",n*(n+1)*(2*n+1)/6);
return 0;
}