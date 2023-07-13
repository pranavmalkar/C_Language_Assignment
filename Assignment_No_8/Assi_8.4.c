#include<stdio.h>

int main(){
int arr[10],i,se=0,so=0;
printf("enter 10 values \n");
for(i=0;i<10;i++)
{
    scanf("%d",&arr[i]);
    if(arr[i]%2==0)
    se+=arr[i];
    else
    so+=arr[i];
}
printf("sum of even  elements is %d",se);
printf("sum of odd elements is %d",so);
return 0;
}