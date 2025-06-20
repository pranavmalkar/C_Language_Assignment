#include<stdio.h>
void areaOfReactangle(int, int);
int main()
{
    int length,width;
    printf("\n Enter the length and width :");
    scanf("\n %d%d",&length,&width);
    areaOfReactangle( length,width);

}

void areaOfReactangle(int length,int width)
{
    int ans=length*width;
    printf("\n Area of Reactangle is %d",ans);
    
}