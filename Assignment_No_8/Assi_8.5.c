#include<stdio.h>

int main(){
int a[10],i,great=0;
printf("enter 10 values \n");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
    if(a[i]>great)
    great=a[i];
    

}
printf("greatest element is %d",great);
return 0;
}