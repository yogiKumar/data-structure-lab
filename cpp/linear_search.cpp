#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key)
{
	int count=0;
	for(int i=0;i<n;++i)
	{
		if(arr[i]==key)
		{
			count=1;
			break;
		}
	}
	cout<<i<<endl;
	return count;
}

int main()
{
	int arr[]={31,23,1,17,19,28,9,3,13,15,22,8,29};
	cout<<linearSearch(arr,13,23)<<endl;
	return 0;
}