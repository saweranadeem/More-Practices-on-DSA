#include<iostream>
using namespace std;
int main()
{
	// write a program which take 10 element from the user and print it in array
	 int array[10];
	 cout<<"Following are the elements in array ";
	 for(int i=0;i<=9;i++)
	{
		cin>>array[i];
	}
	cout<<"Array elements are";
	for(int i=0;i<=9;i++)
	{
		cout<<array[i]<<" \t ";
	}
}
    int max=0 ;
   for(int i=0; i<=9;i++)
{
	if(array[i]>max)
	{
		max=array[i];
    }
    cout<<max;
}

