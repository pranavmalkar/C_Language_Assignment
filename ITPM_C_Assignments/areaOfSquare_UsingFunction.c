#include<stdio.h>

int areaOfSquare(int );
int main()
{
    int side,ans;
    printf("\n Enter the side :");
    scanf("\n %d",&side);

    ans=areaOfSquare(side);
    printf("\n Area of Square is %d",ans);

}

int areaOfSquare(int side)
{
     return side*side;
}