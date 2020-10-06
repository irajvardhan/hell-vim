#include<iostream>
using namespace std;

int* foo(){
	int a = 123;
	int *p;
	p = &a;
	return p;
}

int* bar(){
	int a = 234;
	int b = 345;
	int *p;
	p = &b;
	return p;
}

int main()
{
	// This prints the an address say addr1
	cout<<foo()<<endl;

	// This prints addr2 which is smaller than addr1 by 4 bytes.
	// because it is lower by 4 bytes. 
	// Note that address increases going up (decreases going down)
	cout<<bar()<<endl;
	
	return 0;
	
}
