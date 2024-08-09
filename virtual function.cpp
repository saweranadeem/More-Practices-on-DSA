#include<iostream>
using namespace
 std;
class A    // base class A
{ 
	public:
	 virtual void show()
	{
		cout<< "Showing something";
	}
};
	class B:public A // Child class B
	{                           //class A is inherit in class B on the other hand class B is override on class A
	public:
	void show()
	{
	cout<< "Showing something with class B";
	
	}	
	};
		
	

int main(){
	A*ptr; //make a pointer of class A
	B obj ; // make a obj of class B
	ptr=&obj; // call a pointer
	ptr->show();
	

}
