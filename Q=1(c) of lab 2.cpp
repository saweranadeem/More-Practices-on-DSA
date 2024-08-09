#include<iostream>
using namespace std;
class arr
{
	int arr[10];
	int found=0;
	public:
		int print()
		{
			cout<<"Enter 10 Numbers";
			for(int i=0;i<=9;i++){
			
			cin>>arr[i];
		}
	}
	int disp()
	{
		cout<<"The elements of array are";
		for(int i=0;i<=9;i++)
		{
			cout<<arr[i]<<"\n";
		}
		
	}
	int value()
	{
	cout<"Enter a values to find in array";
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
}
return 0;
}
};
int main()
{
	arr.obj;
	obj.print();
	obj.disp();
	obj.value();
}
