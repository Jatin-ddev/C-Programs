


// Reversing a number 

#include<stdio.h>

int main()
{

    int num1,rem=0,rev=0;
    
    printf("Enter A number : ");
    scanf("%d",&num1);
    
    while(num1!=0)
    {
        rem=num1%10;
        rev=rev*10+rem;
        num1=num1/10;
    }

    printf("Reverse is : %d",rev);
    
    return 0;
}
