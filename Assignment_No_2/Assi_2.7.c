#include<stdio.h>

int main(){
int num,U,H,T;
printf("enter a thre  digit number\n");
scanf("%d",&num);
U=num%10;
num=num/10;
T=num%10;
H=num/10;
printf("sum of three digits is %d",U+H+T);
return 0;
}