#include <iostream>
using namespace std;

class Empty {
public:
	virtual void print(){
		cout<<"This is Empty class with a virtual function\n";
	}

	virtual void show(){
		cout<<"show called\n";
	}

};

class Derived:public Empty{

};

int main()
{
    Empty e;
    cout << "size: " << sizeof(e) << endl;
    cout << "size: " << sizeof(Empty) << endl;
    
    Derived d;
    cout << "size: " <<sizeof(Derived) << endl;
    cout << "size: " <<sizeof(d) << endl;

    return 0;
}
