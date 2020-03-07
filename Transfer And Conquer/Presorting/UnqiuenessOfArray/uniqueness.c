#include <stdio.h>
#include<stdlib.h>
#include"quicksort.h"


int unique(int arr[],int n)
{
  int i =0;
  for(i=0;i<n-2;i++)
  {
    if(arr[i]==arr[i+1])
      return 0;
  }
  return 1;
}
int main()
{
  // inputs
  int arr[] = {5,3,1,9,2,2,4,7};
  int n = 8; // number of elements
  PrintArray(arr,n);
  QuickSort(arr,0,n-1);
  PrintArray(arr,n);
  printf("%s\n",unique(arr,n)==0 ? "not unique" : "unique");
}
