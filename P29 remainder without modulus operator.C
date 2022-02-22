




// remainder of 2 numbers without using % operator.

#include<stdio.h>

int main()
{
    int num1,num2,rem;
    
    printf("Enter Two Numbers : ");
    scanf("%d %d",&num1,&num2);
    
    rem=num1-(num1/num2)*num2;
    
    printf("The Remainder Is : %d",rem);
    

    return 0;
}
