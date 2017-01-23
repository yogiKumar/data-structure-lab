#include<iostream>
using namespace std;
void printArray(int arr[],int low,int high)
{
	for(int i=low;i<high+1;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void merge(int arr[],int low,int high)
{
	//creating new arrays
	int a[7],b[7];
	int mid = (low+high)/2;
	int n1 = mid-low+1;
	int n2 = high-mid;

	//assigning values to new arrays
	for(int i=0;i<n1;++i)
	{
		a[i]=arr[low+i];
	}

	for(int i=0;i<n2;++i)
	{
		b[i]=arr[mid+1+i];
	}

	int j=0,k=0,i=low;
	
	
	while(j<n1 && k<n2)
	{
		if(a[j]<=b[k])
		{
			arr[i]=a[j];
			++j;
		}
		else
		{
			arr[i]=b[k];
			++k;	
		}
		++i;
	}

	//for the  remaining elements
	while(j<n1)
	{
		arr[i]=a[j];
		++j;
		++i;
	}
	while(k<n2)
	{
		arr[i]=b[k];
		++k;
		++i;
	}
	

	printArray(arr,low,high);	

}

void mergeSort(int arr[],int low,int high)
{
	int mid = (low+high)/2;
	if(low<high)
	{
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,high);
	}
}


int main()
{
	int arr[]={31,23,1,17,19,28,9,3,13,15,22,8,29};
	mergeSort(arr,0,12);
	for(int i=0;i<13;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}