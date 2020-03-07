# DivideAndConquerAlgorithms

MERGE-SORT ALGORITHM

This algorithm divides input array in two halves, calls itself for the two halves and then merges the two sorted halves. The merge() function is used for merging two halves


ALGORITHM
MergeSort(arr[0....n-1])
{
    	if(n<1)
	   return

        m = (n)/2
        mergeSort(arr[0.....m-1])
        mergeSort(arr[m.....n-1])
        merge(arr[0.......n-1],m)

MERGE ARRAYS ALGORITHM
The algorithm maintains three pointers, one for each of the two arrays and one for maintaining the current index of final sorted array.

Have we reached the end of any of the arrays?
    No:
        Compare current elements of both arrays 
        Copy smaller element into sorted array
        Move pointer of element containing smaller element
    Yes:
        Copy all remaining elements of non-empty array


Worst Case Complexity [Big-O]: O(n2)
Best Case Complexity [Big-omega]: O(n*log n)
Average Case Complexity [Big-theta]: O(n*log n)