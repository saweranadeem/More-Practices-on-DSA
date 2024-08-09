#include<iostream>
using namespace std;
int array(int Array[10])
{
	for(int i=0;i<=9;i++)
	{
		cin>>Array[i];
	}
	cout<<"The Elements Of Array Are:"<<"\n";
	for(int i=0;i<=9;i++)
	{
		cout<<Array[i];
		cout<<"\n";
	}
}
int minimum(int Array[10])
{
	for(int i=0;i<=9;i++)
	{
		if(Array[0]>Array[i])
		{
			Array[0]=Array[i];
		}
	}
	return Array[0];
}
int main()
{
	int A[10];
	cout<<"Enter 10 elements:";array(A);
	cout<<"The Minimum Num Is:\t";
	cout<<minimum(A);
	cout<<"\n";
}
