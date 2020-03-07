#include <stdlib.h>
#include <stdio.h>

int merge(int A[], int B[],int C[],int p,int q)
{
  int i=0,k=0,j=0;
  while(i<p && j<p)
  {
    if(A[i]<B[j])
    {
      C[k]= A[i];
      k++;
      i++;
    }
    else
    {
      C[k]= B[j];
      k++;
      j++;
    }
  }
  while (i<p) {
    C[k]= A[i];
    k++;
    i++;
  }
  while (j<q) {
    C[k]= B[j];
    k++;
    j++;
  }
}

int main()
{
  int A[] = {5,6,7,8};
  int B[] = {2,3,4,9,11};
  int C[9];
  merge(A,B,C,4,5);
  for (int i =0; i<8;i++) {
      printf("%d->",C[i]);
  }


}
