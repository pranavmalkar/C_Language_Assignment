#include<stdio.h>

int main(){
int r;
float area;
printf("enter the value of radius");
scanf("%d",&r);
area=3.14*r*r;
printf("Area of circle is %f having radius %d",area,r);

return 0;
}