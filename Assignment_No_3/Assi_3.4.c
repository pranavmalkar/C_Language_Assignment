#include<stdio.h>

int main(){
int num;
printf("enter a number \n");
scanf("%d",&num);
num=num/100;
if((num<=9)&&(num>=1))
{
    printf("number is 3 digit");
}
else {
    printf("number is not 3 digit");
}
return 0;
}