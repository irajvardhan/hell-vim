#include <iostream>

using namespace std;


class A{
public:
	static int s;
	
	// return reference to the object of class A (that called foo)
	A& foo(){
		s++;
		cout<<s<<" ";
		return *this;
	}

};

int A::s=0;

int main(){
	
	A a;
	
	// prints:
	// 1 2 3 4
	a.foo().foo().foo().foo();
	cout<<endl;
	return 0;
}
