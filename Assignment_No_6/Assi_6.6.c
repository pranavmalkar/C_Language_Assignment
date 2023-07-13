#include<stdio.h>

int main(){
int n,count=0,i;
printf("enter the number \n");
scanf("%d",&n);
for(i=10;i<n*10;)
{
    if(n>0)
    {
        n=n/10;
        count++;
    }
}
printf("the number of digits are %d",count);
return 0;
}