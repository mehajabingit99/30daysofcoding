#include<bits/stdc++.h>
using namespace std;

bool areEqual(int arr1[],int arr2[], int m, int n)
{
	if(m!=n)
	return false;
	sort(arr1,arr1+m);
	sort(arr2,arr2+n);
	for(int i=0;i<m;i++)
	{
		if(arr1[i]!=arr2[i])
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

int main()
{
	int m,n;
	cout<<"Enter size of 1st array:";
	cin>>m;
	int arr1[m];
	cout<<"Enter the elements of 1st array:\n";
	for(int i=0;i<m;i++){
		cin>>arr1[i];
	}
	cout<<"Enter size of 2nd array:";
	cin>>n;
	int arr2[n];
	cout<<"Enter the elements of 2nd array:\n";
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}
	
	if(areEqual(arr1,arr2,m,n)){
		cout<<"\n Arrays are equal";
	}
	else
	{
		cout<<"\n Arrays are not equal";
	}
	cout<<endl;
	return 0;
	
	
}
