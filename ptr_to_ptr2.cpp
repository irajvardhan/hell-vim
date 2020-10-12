#include <iostream>

using namespace std;

int main(){

	int a[] = {10,20,30,40,50};
	int *p[] = {a,a+3,a+4,a+1,a+2};
	int **ptr = p;
	
	cout<<"ptr-p: "<<ptr-p<<endl;

	// second one will be +8bytes
	cout<<ptr<<endl;
	cout<<ptr+1<<endl;	
	
	// This prints 10 20 30 40 50
	// say array a is at 1000
	// *ptr is 1000 => **ptr = 10
	// *ptr+1 is 1000+4 => *(*ptr+1) = 20
	cout<<*(*ptr)<<endl;
	cout<<*(*ptr + 1)<<endl;
	cout<<*(*ptr + 2)<<endl;
	cout<<*(*ptr + 3)<<endl;
	cout<<*(*ptr + 4)<<endl;

	cout<<"---"<<endl;

	// prints 10 40 50 20 30
	cout<<**(ptr)<<endl;
	cout<<**(ptr + 1)<<endl;
	cout<<**(ptr + 2)<<endl;
	cout<<**(ptr + 3)<<endl;
	cout<<**(ptr + 4)<<endl;

	return 0;
	
}
