#include <stdio.h>
#include<stdlib.h>

int BinarySearch(int *a, int l , int r, int k)
{
    int m = (l+r)/2;
      while(l<=r)
      {
        if(k == a[m])
        {
          return m;
        }
        else if(k <a[m]){
           m--;
        }
        else if(k >a[m])
        {
           m++;
        }
      }
      return -1;
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
