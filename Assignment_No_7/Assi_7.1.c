#include<stdio.h>

float area(int);
int main(){
int r;
float a;
printf("enter the value of radius\n");
scanf("%d",&r);
a=area(r);
printf("the area of circle is %f",a);

return 0;
}
float area(int a)
{
    return a*a*3.14;
}