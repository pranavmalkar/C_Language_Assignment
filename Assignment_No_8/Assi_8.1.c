#include<stdio.h>

int main(){
int arr[10],i,sum=0;
printf("enter 10 values \n");
for(i=0;i<10;i++)
{
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
printf("sum of 10 elements is %d",sum);
return 0;
}