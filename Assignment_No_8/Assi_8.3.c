#include<stdio.h>

int main(){
int arr[10],i,sum=0;
float avg;
printf("enter 10 values \n");
for(i=0;i<10;i++)
{
    scanf("%d",&arr[i]);
    sum+=arr[i];
}
avg=sum/10.0;
printf("sum of 10 elements is %f",avg);
return 0;
}