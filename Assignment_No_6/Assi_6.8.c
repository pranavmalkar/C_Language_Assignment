#include<stdio.h>

int main(){
int a,b,i,lcm;
float c,d;
printf("enter two numbers\n");
scanf("%d %d",&a,&b);
for(i=1;i<=a*b;i++)
{
  if((i%a==0)&&(i%b==0))
  {
  break;
  }
  
}
printf("lcm is %d",i);
return 0;
}