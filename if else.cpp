#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter The Num";
	cin>>a>>b>>c;
	if(a>b&&a>c)             // Block of code to b excuted if the condition is true
	{
		cout<<"A is Greater Num"; 
	}
	else if (b>a&&b>c)        // Block of code to b excuted if the condition 1  is false & condition2 is true
	{
		cout<<"B is Greater num";
	}
	else     // Block of code to b excuted if the condition 1 is false & condition 2 is false
	{
		cout<<"C is greater Num";
	}

}
