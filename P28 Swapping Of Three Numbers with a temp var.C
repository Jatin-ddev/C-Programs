


// Swapping three numbers with a temp variable 

#include<stdio.h>

int main()
{
    int num1,num2,num3,swap;
    
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    
    swap=num1;
    num1=num2;
    num2=num3;
    num3=swap;
    
    printf("After Swapping : %d\t%d\t%d",num1,num2,num3);
    
    return 0;
}
