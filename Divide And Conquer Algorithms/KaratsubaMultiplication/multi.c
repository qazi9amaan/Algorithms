#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int multiply(int num1, int num2)
{
  if ((num1<10)|| (num2<10))
      return num1*num2;

  // maximum length
  int maxi = max((int)ceil( log10(num1)),(int)ceil( log10(num2)));


  // middle
  int m = maxi/2;

  // splitting num1
  int a1 = (num1)/((int)pow(10,m));
  int a2 = (num1)%((int)pow(10,m));
  

  // spliting num2
  int b1 = (num2)/((int)pow(10,m));
  int b2 = (num2)%((int)pow(10,m));

  // calculating values
  int p1 =  multiply(a1,b1);
  int p2 =  multiply(a2,b2);
  int p3 =  multiply(a1+a2,b1+b2);

  int product = (p1*pow(10,m*2))+((p3-p1-p2)*pow(10,m))+p2;
  return product;
}



int main()
{
  int a = 2150;
  int b = 4130;

  printf("%d * %d = %d\n",a,b,multiply(a,b));
}
