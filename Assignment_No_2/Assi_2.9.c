#include<stdio.h>

int main(){
int a,b,c,d;
a=sizeof(int);
b=sizeof(float);
c=sizeof(char);
d=sizeof(double);
printf("size of int, float, char, double are %d,%d,%d,%d respectively",a,b,c,d);
return 0;
}