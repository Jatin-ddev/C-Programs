




// Calculate total marks and Percentage

#include<stdio.h>

int main()
{
    int math , eng , hin, sci , sst;
    float per;
    
    printf("Enter The Marks Of English: ");
    scanf("%d",&eng);
    
    printf("Enter the Marks Of hindi : ");
    scanf("%d",&hin);
    
    printf("Enter The Marks Of Math: ");
    scanf("%d",&math);
    
    printf("Enter The marks of Science: ");
    scanf("%d",&sci);
    
    printf("Enter the Marks Of Social Science : ");
    scanf("%d",&sst);
    
    per=(float)(math+eng+hin+sci+sst)*100/500;
    
    printf("\n Your Percentage Is : %f",per);
    
    return 0;
    
    
}
