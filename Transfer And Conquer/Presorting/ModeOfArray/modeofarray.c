#include <stdio.h>
#include<stdlib.h>
#include"functions.h"


void mode(int arr[],int n)
{
  int i=0,modefreq=0;
	while(i<n-1){
      int runlength =1 ,runvalue = arr[i];
  		while(i+runlength<=n-1 && arr[i+runlength]==runvalue)
  		{
  			runlength = runlength +1;
  		}
  	   if(runlength>modefreq)
       {
         modefreq = runlength;
       }
        printf("Value : %d , Frequency : %d\n",runvalue,modefreq );
        modefreq =0;
  	i=i+runlength;
  }

}
int main()
{
  // inputs
  int arr[] = {5,3,1,7,2,2,7,7};
  int n = 8; // number of elements
  PrintArray(arr,n);
  QuickSort(arr,0,n-1);
  PrintArray(arr,n);
  mode(arr,n);
}
