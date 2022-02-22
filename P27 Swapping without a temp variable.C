





//  Swapping Without Temp Variable 

#include<stdio.h>

int main()
{
    int num1,num2;
    
    printf("Enter Two Numbers: ");
    scanf("%d %d",&num1,&num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    
    printf(" After Swapping : %d %d",num1,num2);
    
    return 0;
}
