#include<iostream>
using namespace std;

void selectSort(int arr[],int n)
{
	int min=arr[0];
	int pos=0;
	for(int j=0;j<n-1;++j)
	{
		min=arr[j];
		for(int i=j+1;i<n;++i)
		{
			if(arr[i]<min)
			{
				min=arr[i];
				pos=i;
			}
		}
		arr[pos]=arr[j];	
		arr[j]=min;
	}
	
}

int main()
{
	int arr[]={31,23,1,17,19,28,9,3,13,15,22,8,29};
	selectSort(arr,13);
	for(int i=0;i<13;++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}