// Printing Area Of Circle & Circumference Of Circle

#include<stdio.h>

int main(){

int rad ;
float pi=3.14,Ar , Ci;

printf("Enter The Radius of Circle ");
scanf("%d",&rad);

Ar=pi*rad*rad;
Ci=2*pi*rad;

printf("\n The Area Is %f", Ar);
printf("\n The Circumference Is %f",Ci);

return 0;
}
