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
		cout<< "Showing something with another function";
		
		}	
	
};
int main(){
A obj;

obj.show(2);
}
