#include<stdio.h>

int main(){
int a[10],i,small=a[0];
printf("enter 10 values \n");
for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
    if(a[i]<small)
    small=a[i];
    

}
printf("smallest element is %d",small);
return 0;
}