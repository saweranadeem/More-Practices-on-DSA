#include<iostream>
#include<string>
using namespace std;
class Myclass{ //to create a class use the class keyword
public:
 string myname;
 float myrollno;
 double myage;	
};
int main(){

Myclass myobj;// to create a obj use the class name with created obj and acces the attributes
myobj.myname="Sawaira";
myobj.myrollno=113;
myobj.myage=20;
//access the attributes
cout<<myobj.myname<<" ";
cout<<myobj.myrollno<<" ";
cout<<myobj.myage;
return 0;
}



