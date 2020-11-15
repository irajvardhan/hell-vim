#include <iostream>

using namespace std;

int main(){

	int arr[5] = {1,2,3,4,5};
	
	// I think this is equivalent to int*p = arr;
	// In both cases starting address of the array will be stored by p.
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
	
	// prints 8
	cout<<"sizeof(&arr): "<<sizeof(&arr)<<endl;
	
	// prints 8
	cout<<"sizeof(ap): "<<sizeof(ap)<<endl;
	
	// prints 20 (Note that *ap is equivalent to arr)
	cout<<"sizeof(*ap): "<<sizeof(*ap)<<endl;
	
	// Tricky: *ap+1 becomes a simple pointer pointint to second element of array
	// prints 8
	cout<<"sizeof(*ap+1): "<<sizeof(*ap+1)<<endl;

	// prints 4 (size of int)
	cout<<"sizeof(**ap): "<<sizeof(**ap)<<endl;




	

	return 0;
}
