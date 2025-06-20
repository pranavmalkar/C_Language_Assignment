#include<stdio.h>
#include<math.h>

void checkFibonacci();
void checkPalandrom();
void checkPrime();
void checkArmstrong();



int main()
{
    int choice;
    do{
    printf("\n Enter your choice for opration");
    printf("\n -------Menu-------------");
    printf("\n 1 for Fibonacci number");
    printf("\n 2 for Palandrom number"); 
    printf("\n 3 for Prime number");
    printf("\n 3 for Armstrong number");
    scanf("\n %d",&choice);

    switch (choice)
    {
        case 1:
             checkFibonacci();
        break;

        case 2:
             checkPalandrom();
        break;

        case 3:
              checkPrime();
        break;

        case 4:
            checkArmstrong();
        break;
    
        default:
            printf("Invalid choice");
        break;
    }
    }while(choice != 0);
    return 0;
}

void checkFibonacci()
{
    int n,i,a=0,b=1,next;
    printf("\n Enter the number");
    scanf("%d",&n);

    for(i=0; i<n;i++)
    {
        printf("\n %d",a);
        next=a+b;
        a=b;
        b=next;
    }
}

void checkPalandrom(){
    int n, rem, original, temp = 0;
    printf("\n Enter the number ");
    scanf("\n %d", &n);
    original = n;

    while (n > 0)
    {
        rem = n % 10;
        temp = temp * 10 + rem;
        n = n / 10;
    }

    if (original == temp)
    {
        printf("\n This number is Palandrom");
    }
    else
    {
        printf("\n This number is not Palandrom");
    }
}

void checkPrime()
{
    int num, count = 0;

    printf("Please enter a number :");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 0)
    {
        printf("%d is a Prime Number", num);
    }
    else {
        printf("%d is a not Prime Number", num);

    }
    
    
}

void checkArmstrong()
{
     int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the sum of the nth power of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if number is Armstrong
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    
}