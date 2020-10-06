#include <iostream>

using namespace std;

int main(){

	int arr[5] = {1,2,3,4,5};
	int *p =(int*)&arr;
	
	// prints base addr of array
	cout<<"p: "<<p<<endl;

	// prints 1
	cout<<"*p: "<<*p<<endl;
	
	// ap is an array pointer
	int (*ap)[5] = &arr;
	
	// prints base address of array
	cout<<"ap: "<<ap<<endl;

	// again prints base address of array which is the addr of the first element of array
	cout<<"*ap: "<<*ap<<endl;
	
	// prints 1
	cout<<"**ap: "<<**ap<<endl;
	

	return 0;
}
