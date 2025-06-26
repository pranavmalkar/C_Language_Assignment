#include<stdio.h>
int checkPalindrome(int num);
int main()
{
    int size;
    printf("\n Enter the size of array :");
    scanf("%d",&size);

    int arr[size];
    printf("\n Enter the values for array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Elements in array are :");
    for (int i = 0; i < size; i++)
    {
        printf(" %d ",arr[i]);
    }
     
    printf("\n palindrome numbers in array are :");
    for (int i = 0; i < size; i++)
    {
        if(checkPalindrome(arr[i])>0)
        {
            printf(" %d ",arr[i]);
        }
        
    }
    

}  
int checkPalindrome(int num)
{
    int original_num=num,rem,temp=0;
    while(num>0)
    {
        rem=num%10;
        temp=temp*10+rem;
        num=num/10;
    } 
    if(original_num==temp)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

    