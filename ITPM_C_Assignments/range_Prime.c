#include <stdio.h>

int main()
{

    int i,j,count=0,range;

    printf("\n Enter range for Prime Number");
    scanf("\n %d",&range);
    for(i=2;i<range;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i % j ==0)
            count++;
        }
        if(count==0){
            printf("\n %d",i);
        }
        count=0;

    }
}