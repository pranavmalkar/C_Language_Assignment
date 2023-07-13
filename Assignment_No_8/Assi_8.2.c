#include<stdio.h>

int main(){
int a[10],b[10],i;
printf("enter the array elements\n");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
    b[i]=a[i];
}
printf("copied array is \n");
for(i=0;i<10;i++)
printf("%d  ",b[i]);
return 0;
}