#include<iostream>
#include<string>
using namespace std;
class student{  //create a class
	private:
	string myname;
	int myage;
	float myrollno;
	public:
	student() // create an constructor in public mode
	{ 
    myname="Sawaira";
	myage= 20;
	myrollno=113;
	cout<<"My Name Is"<<" "<<myname<<"\n";
    cout<<"My Age Is"<<" "<<myage<<"\n";
	cout<<"My Roll No Is"<<" "<<myrollno<<"\n";
			
	}
		
};
int main()
{
	student S; //create an obj
return 0;	
}
