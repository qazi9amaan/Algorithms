# TransformAndConquerAlgorithms
Transform And Conquer Algorithms | Simpler Instance  C-Language Implementation

Presorting : It is the process in which an instances (array) is initially sorted an then the futher operation is performed



//Presorting of an array : Quick Sort Function

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



	

