



// Swap two numbers using a temporary variable in  C

#include<stdio.h>

int main()
{
    int num1,num2,swap=0;   // why 0 , to Avoid Garbage Value 
        // 5   2
    printf("Enter Two Numbers : ");
    scanf("%d\t%d",&num1,&num2);
    
    swap=num1;          //swap=5
    num1=num2;          //num1=2
    num2=swap;          //num2=5
    
    printf("After Swapping : %d\t%d",num1,num2);
    
    
}
