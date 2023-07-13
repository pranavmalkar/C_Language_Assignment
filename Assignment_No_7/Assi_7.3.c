#include<stdio.h>
int checkevenorodd(int);
int main(){
int n,k;
printf("enter the value of n\n");
scanf("%d",&n);
k=checkevenorodd(n);
if(k==1)
printf("number is even\n");
else
printf("number is odd\n");
return 0;
}
int checkevenorodd(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}