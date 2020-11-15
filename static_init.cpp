#include <iostream>

using namespace std;

int init(){
	return 10;
}

int main(){
	static int i=init(); // Dynamically initialized
	// prints 10
	cout<<i<<endl;
	
	static int j; //Zero Initialized
	cout<<j<<endl; 
	int x; //Undefined Behavior, Might be Initialized to anything
	cout<<x<<endl;
	
	return 0;
}
