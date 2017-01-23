#include<iostream>
using namespace std;


void insertSort(int arr[],int n)
{
	for(int i=1;i<n;++i)
	{
		int j=i-1;
		int key=arr[i];
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

int main()
{
	int arr[]={31,23,1,17,19,28,9,3,13,15,22,8,29};
	insertSort(arr,13);
	for(int i=0;i<13;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}