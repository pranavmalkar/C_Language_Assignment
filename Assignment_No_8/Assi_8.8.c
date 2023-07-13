#include<stdio.h>

int main(){
int n,i;
printf("enter the value of n\n");
scanf("%d ",&n);
int a[n];
printf("enter the elements of array");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=n-1;i<=0;i--)
{
    printf("%d\n",a[i]);
}
return 0;
}