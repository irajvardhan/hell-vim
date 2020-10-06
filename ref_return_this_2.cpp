#include <iostream>

using namespace std;


class A{
public:
	int x;
	static int s;
	
	A(){
		x = 10;
	}

	void increment(){
		x++;
	}
	
	// We are returning a copy of the object that called foo
	A foo(){
		return *this;
	}

};

int A::s=0;

int main(){
	
	A a;
	
	A b;
	b = a.foo();
       
        // prints 10 10	
	cout<<"a.x: "<<a.x<<endl;
	cout<<"b.x: "<<b.x<<endl;	
	
	// changes a but not b [The case would be different had foo return a reference like A&]
	a.increment();
	
	// prints 11 10
	cout<<"a.x: "<<a.x<<endl;
	cout<<"b.x: "<<b.x<<endl;	

	return 0;
}
