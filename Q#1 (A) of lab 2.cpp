#include<iostream>
using namespace std;
int main()
{
	int arr[10];           //declaration of array
	cout<<"Take Value From The User";
	for(int i=0;i<=9;i++)
	{
		cin>>arr[i];
	}
	cout<<"Array Values Are";
		for(int i=0;i<=9;i++)
	{
		cout<<arr[i]<<"\t";
	}
}

