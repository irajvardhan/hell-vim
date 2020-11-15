#include<iostream>

using namespace std;

int main(){
	int arr[] = {1,2,3,4,5};
	int *p = &arr[0];
	
	// prints base address of array
	cout<<"p: "<<p<<endl;

	// same as above, prints starting address of array
	cout<<"arr: "<<arr<<endl;

	// prints 8 (size of a pointer)
	// Note: array has decayed to a pointer in p
	cout<<"sizeof(p): "<<sizeof(p)<<endl;

	// arr is an array. size is 5x4 = 20 bytes
	// prints 20
	cout<<"sizeof(arr): "<<sizeof(arr)<<endl;
	

	return 0;
}
