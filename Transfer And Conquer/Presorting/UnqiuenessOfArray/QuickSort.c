// QUICK SORT
#include <stdio.h>
#include<stdlib.h>
#include"quicksort.h"

int Partiton(int arr[], int start, int final);
void swap(int *a, int *b);

void PrintArray(int arr[], int n)
{
  for(int i =0; i<n;i++){printf("%d |",arr[i]);}
  printf("\n");
}


//Swap Function : swaps the two elements of an array.
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/** Partition Function : divides the array w.r.t pivot element where
all the element left of pivot will be less than pivot and all the
element right of pivot wil be greater then pivot **/
int Partiton(int arr[], int start, int final)
{
  int i=start+1;
  int j=final;
  int pivot = start;

  while(i<j)
  {
    while(i<=j && arr[i]< arr[pivot])i++;
    while (i<=j && arr[j]> arr[pivot]) j--;

    if(i<j)
    {
      //printf("Swapping %d --> %d\n",arr[i],arr[j] );
      swap(&arr[i],&arr[j]);
      i++; j--;
    }
  }

    if(arr[pivot]>arr[j])
  {
  //  printf("Swapping pivot %d --> %d\n",arr[pivot],arr[j] );
    swap(&arr[pivot],&arr[j]);
  }

  return j ;

}


void QuickSort(int arr[], int i , int f)
{
  if(i<f)
  {
    int s = Partiton(arr,i,f);
    QuickSort(arr,i,s-1);
    QuickSort(arr,s+1,f);
  }
}
