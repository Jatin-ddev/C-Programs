

// Printing Tables 

// That`s Easy First we require Loop Why Becoz We When we look in  a table 

// 1 times 1 , 1 times 2 , 1 times 3 (1,2,3,4,5,6,7,8,9,10 ) this goes on .... So for That We Take Loop and we take a number 

// So 
#include<stdio.h>

int main()
{

int num , i;
  
  printf("Enter A Number ");
  scanf("%d",&num);

for(i=1;i<=10;i++)
{
 printf("%d * %d = %d\n", num, i, (num*i));

}
	
return 0;
}
