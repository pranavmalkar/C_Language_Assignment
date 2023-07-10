#include<stdio.h>

int main(){
int num,digit;
printf("enter a number and digit\n");
scanf("%d %d",&num,&digit);
num=num*10;
num=num+digit;
printf("required number is %d\n",num);
return 0;
}