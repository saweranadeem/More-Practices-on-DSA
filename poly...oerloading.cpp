#include<iostream>
using namespace
 std;
class A{
	public:
	void show()
	{
		cout<< "Showing something";
	}
	void show(int x)
	{
		cout<< "Value of x: " << x;
		
		}	
	
};
int main(){
A obj;
obj.show();
obj.show(2);
obj.show(8888);
}
