#include<stdio.h>
void factor(int);
int main(){
int n;
printf("enter the value of n\n");
scanf("%d",&n);
factor (n);
return 0;
}
void factor(int n)
{
int i,j=2;
for(i=2;i<=n;++i)
{
    while(1)
    {
     if(n%j==0)
     {n=n/j;
     printf("%d\n",j);}
     else{
     j++;
     }
     
    }
}
}