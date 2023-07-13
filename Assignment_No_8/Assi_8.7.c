#include<stdio.h>

int main(){
int a[10],i,j,temp=0;
printf("enter 10 values \n");
for(i=0;i<5;i++)
    scanf("%d",&a[i]);
for(i=0;i<5;i++)
{
    for(j=i+1;j<5;j++)
    {
    if(a[i]>a[j])
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
   
    }
printf("%d  ",a[i]);
}
return 0;
}