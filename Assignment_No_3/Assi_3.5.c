#include<stdio.h>

int main(){
int a,b,c,d;
printf("enter a quadratic equatioin variables\n");//eg.ax^2+bx+c=0;
scanf("%d %d %d",&a,&b,&c);
d=b*b-4*a*c;
if(d==0)
printf("roots are equal and real\n");
else if(d<0)
printf("equal and imaginary");
else 
printf("roots are real and distinct");
return 0;
}