#include<stdio.h>

void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1);

int main()
{
	int a[]={4,6,5,7,8,9,1,2,3};
  int n =9,i; // no of elements

	mergesort(a,0,n-1);

	printf("\nSorted array is :");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	return 0;
}

void mergesort(int a[],int i,int j)
{
	int mid;

	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(a,i,mid);		//left recursion
		mergesort(a,mid+1,j);	//right recursion
		merge(a,mid,j+1);	//merging of two sorted sub-arrays
	}
}

void merge(int a[],int mid, int n)
{
	int temp[50];	//array used for merging
	int i,j,k;
	i=0;	//beginning of the first list
	j=mid+1;	//beginning of the second list
	k=0;

	while(i<=mid && j<=n)	//while elements in both lists
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}

	while(i<=mid)	//copy remaining elements of the first list
		temp[k++]=a[i++];

	while(j<=n)	//copy remaining elements of the second list
		temp[k++]=a[j++];

	//Transfer elements from temp[] back to a[]
	for(i=0,j=0;i<=n;i++,j++)
		a[i]=temp[j];
}
