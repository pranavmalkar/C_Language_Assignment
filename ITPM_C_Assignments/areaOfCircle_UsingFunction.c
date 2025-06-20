#include<stdio.h>
int areaOfCircle();


int main()
{
    int ans;
    ans=areaOfCircle();
    printf("\n Area of Circle is %d ",ans);
}

int areaOfCircle(){
    int radius;
    printf("\n Enter The radius : = ");
    scanf("%d", &radius);
    return 3.14 * radius * radius;
}