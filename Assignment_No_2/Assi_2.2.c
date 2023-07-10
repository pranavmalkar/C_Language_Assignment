#include<stdio.h>

int main(){
int num;
printf("enter a number\n");
scanf("%d",&num);
num=num/10;
num=num*10;
printf("required number is %d",num);
return 0;
}