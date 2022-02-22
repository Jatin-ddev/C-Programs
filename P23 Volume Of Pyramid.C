

// volume_of_pyramid = (1/3)*length*breadth*height;

#include<stdio.h>

int main(){

int len,wid,hg;
float vl;

printf("Enter The Length Of Pryamid: \n Enter The Breadth \n Enter The Height  ");
scanf("%d %d %d",&len,&wid,&hg);

vl= (len*wid*hg)*(0.3333);

printf("\n The Area Of Pyramid Is :%f",vl);

return 0;
}


// Same Goes For Volume Of Cone : - V= (pi*r*r*h)*(0.33333)

// Same Goes For Volume Of Spehere : - V=(1.33333)*(Pi*r*r*h)
