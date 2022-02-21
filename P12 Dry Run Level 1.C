
// Try To Do By Yourself , Be Honest Dear! , If You Don`t Get Solutions Are Provided 


void main()
{
 char c=90;
 clrscr();
 printf(“%c”,c);
}

solution :- 90 ASCII value is of upper case Z 
o/p -> Z



void main()
{
 unsigned char c=65;
 clrscr();
 printf(“%d %c %d “,c,c,c);
}

o/p -> 65 A 65 ,Spacing between values

void main()
{
 unsigned u=2147483647;
 long l=2147483647;

 printf("\n u=%u l=%ld",u,l);

}


ans u will get the values for int %u for long values 


void main()
{
 float a=3e-1,b=2e-2;

 printf(“a=%g b=%g”,a,b);
}

o/p-> for example 3e-1 = 3 * (10)^-1 = 0.3
	for example 2e-2 = 2 * (10)^-2 = 0.02
       but example 3e+1 = 3 * (10)^1 = 30


void main()
{
 int x,a=1e1, b=0;
 clrscr();
 b+=1e1;
 printf(“a= %d b=%d”,a,b);
}

o/p a= 10 b=10




void main()
{
 int x,a=2, b=3;

 printf(" a/b=%f",(float)a/b);


}

o/p -> 0.666667


void main()
{

printf(“\n Division operation Result”);
printf(“\n Two Integers (5 & 2) : %d”,5/2);
unsigned int x=65536;
printf(“\n One int & one float (5.5 & 2) : %g”,5.5/2);
printf(“\n Two Integers (5 & 2) : %g”,(float)5/2);
}

sol. %g is format specifier for float 

Division operation Result
Two Integers (5 & 2): 2
One int & one float (5.5 & 2): 2.75
Two Integers (5 & 2): 2.5


void main()
{
const int num=12;
++num;
}

// Error ,will not get executed! ‘cannot modify a const value’.





