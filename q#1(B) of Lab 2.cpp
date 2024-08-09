#include<iostream>
using namespace std;
int main()
{
	int arr[10],found;           //declaration of arra
	cout<<"Take Value From The User";
	for(int i=0;i<=9;i++)
	{
		cin>>arr[i];
	}
	cout<<"Array Values Are";
		for(int i=0;i<=9;i++)
	{
		cout<<arr[i]<<"\t";
		cout<<"\n";
	}
		cout<<"Enter a value To find in Array";
		cin>>found;
		for(int i=0;i<=9;i++){
			
	if(arr[i]==found)
		
	{
		cout<<"Value Found";
	}
	else
	{
		cout<<"value not found";
	}
return 0;
}
}

