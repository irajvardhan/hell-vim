#include<iostream>
using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5,6};
	
	// p is a pointer.
	// Note that you could have done int* p; p=arr;
	int *p = arr;

	// ptr to ptr 
	int **pp = &p;

	// Following shows the difference between p and arr.
	//prints 8 on a 64 bit machine
	cout<<sizeof(p)<<endl;

	// prints 24 (assuming int takes 4 bytes)
	cout<<sizeof(arr)<<endl;	

	// prints 8 on 64 bit
	cout<<sizeof(pp)<<endl;

	// both of these will be same and will be 4 bytes
	// *arr and *p are simply equal to 1 (the first element of array)
	// size of 1 (an int) is 4 bytes
	cout<<sizeof(*arr)<<endl;
	cout<<sizeof(*p)<<endl;
	
	// should be 8
	cout<<sizeof(*pp)<<endl;	
	
	// should be 4
	cout<<sizeof(**pp)<<endl;



	return 0;


}
