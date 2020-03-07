#include <stdio.h>
#include<stdlib.h>

int BinarySearch(int *a, int l , int h, int k)
{
      if(h<=0)
        return -1;
      int m = (l+h)/2;
      if(k==a[m])
        return m;
      if(k<a[m])
        return BinarySearch(a,l,m-1,k);
      else if(k>a[m])
        return BinarySearch(a,m+1,h,k);
}

int main()
{
  int a[] = {1,2,3,4,5,6};
  int n = 6;
  int k;
  for(int i =0;i<n;i++){printf("%d |",a[i]);}
  printf("\nEnter Key :");
  scanf("%d",&k);
  printf("Position %d\n",BinarySearch(a,0,n,k) );
}
