




#include<stdio.h>

int main()
{

    int num1,rem=0,rev=0;
    
    printf("Enter A number : ");
    scanf("%d",&num1);
    
  
    
      for(;num1!=0;num1=num1/10)
    {
        rem=num1%10;
        rev=rev*10+rem;
       
    }

    printf("Reverse is : %d",rev);
    
    return 0;
}
