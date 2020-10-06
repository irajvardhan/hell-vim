#include <iostream>

using namespace std;

int bar(){
	return 10;
}

int foo(){
	// x is dynamically initialized to 10
	static int x = bar();
	x++;
	return x;
}

int main(){
	// output is 11 12 13
	cout<<foo()<<" "<<foo()<<" "<<foo()<<endl;
	return 0;
}
