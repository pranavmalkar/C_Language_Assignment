#include<stdio.h>

int main(){
int n,i,k;
printf("enter the value of n\n");
scanf("%d",&n);

for(i=2;i<n;i++)
{
    if(n%i==0)
    k=3;
    break;

}

if(k==3)
printf("number is a not prime");
else
printf("number is a prime");

return 0;
}