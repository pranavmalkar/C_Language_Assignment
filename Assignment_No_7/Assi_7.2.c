#include<stdio.h>
float intrest(int ,int ,int);
int main(){
int p,r,n;
float si;
printf("enter the value of p,r,n\n");
scanf("%d %d %d",&p,&r,&n);
si=intrest(p,r,n);
printf("%f",si);
return 0;
}
float intrest(int a,int b,int c)
{
    return a*b*c/100.0;
}