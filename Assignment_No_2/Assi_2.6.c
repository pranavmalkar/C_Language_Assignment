#include<stdio.h>

int main(){
int a,b,temp;
printf("enter two numbwes\n");
scanf("%d %d",&a,&b);
printf("two numbers before swapping are %d and %d\n",a,b);
temp=a;
a=b;
b=temp;
printf("two numbers after swapping are %d and %d",a,b);
return 0;
}