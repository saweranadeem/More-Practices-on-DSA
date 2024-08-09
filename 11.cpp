#include<iostream>
using namespace std;
class A{
	public:
   	virtual  	void show()
		{
	cout<<"showing something";
	    }
	};
	    class B:public A
	    {
		
	    public :
    void show()
    {
    	cout<<"showing something with class B";
	}
		
};
int main()
{
A*ptr;
B obj;
ptr=&obj;
 ptr->show();
}
