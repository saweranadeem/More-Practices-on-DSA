#include<iostream>
#include<string>
using namespace std;
class student{  //create a class
	private:
	string myname;
	int myage;
	float myrollno;
	public:
	student();//when wo declare a constructor outside the class we use ; with constructor
	}; 
	student ::student() // declare a constructor outside  the class
	{ 
    myname="Sawaira";
	myage= 20;
	myrollno=113;
	cout<<"My Name Is"<<" "<<myname<<"\n";
    cout<<"My Age Is"<<" "<<myage<<"\n";
	cout<<"My Roll No Is"<<" "<<myrollno<<"\n";
			
	}
		

int main()
{
	student S; //create an obj
return 0;	
}
