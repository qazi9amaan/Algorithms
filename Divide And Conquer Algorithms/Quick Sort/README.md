# DivideAndConquerAlgorithms

QUICK-SORT ALGORITHM

This algorithm picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.

Always pick first element as pivot. (implemented below)
Always pick last element as pivot 
Pick a random element as pivot.
Pick median as pivot.

ALGORITHM
quickSort(arr[], low, high)
{
    if (low < high)
    {
        p = partition(arr, low, high);
        quickSort(arr, low, p - 1);  
        quickSort(arr, p + 1, high); 
    }
}

partition (arr[], low, high)
{
    // pivot (Element to be placed at 0 position)
    pivot = arr[low];  
    i = (low+1) ;
    j = high;

    while(i<j)
    {
	while(i<=j && A[i]<= pivot)i++;
	while(i<=j && A[j]>= pivot)j--;
	if(i<j)
	{
		swap(A[i], A[j]);
		i++; j--;
	}	
   }
    swap(A[j], pivot);
    return j;
}


Worst Case Complexity [Big-O]: O(n2)
Best Case Complexity [Big-omega]: O(n*log n)
Average Case Complexity [Big-theta]: O(n*log n)