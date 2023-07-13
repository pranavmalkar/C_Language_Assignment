#include<stdio.h>
void printodd(int);
int main(){
int i,n;
printf("enter the value of n\n");
scanf("%d",&n);
printodd( n);
return 0;
}
void printodd(int n)
{
    int i;
    for(i=1;i<=2*n;i+=2)
    printf("%d\n",i);
}